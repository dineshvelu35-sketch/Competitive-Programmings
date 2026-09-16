// Problem: Dynamic Range Minimum Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1649
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
long long int find(vector<long long int>&seg,long long int node,long long int nl,long long int nr,long long int ql,long long int qr)
{
	if(nr<ql || nl>qr)
	{
		return LLONG_MAX;
	}
	if(ql<=nl && nr<=qr)
	{
		return seg[node];
	}
	long long int mid=(nl+nr)/2;
	long long int ltv=find(seg,node*2,nl,mid,ql,qr);
	long long int rtv=find(seg,node*2+1,mid+1,nr,ql,qr);
	return min(ltv,rtv);
}
int main()
{
	long long int N,Q;
	cin>>N>>Q;
	long long int NewN=1;
	while(NewN<N)
	{
		NewN=NewN<<1;
	}
	vector<long long int> seg(NewN+NewN,LLONG_MAX);
	for(long long int i=0;i<N;i++)
	{
		cin>>seg[NewN+i];
	}
	for(long long int i=NewN-1;i>=1;i--)
	{
		seg[i]=min(seg[i+i],seg[i+i+1]);
	}
	while(Q--)
	{
		int step;
		cin>>step;
		if(step==1)
		{
			int pos,num;
			cin>>pos>>num;
			int node=NewN+pos-1;
			seg[node]=num;
			node/=2;
			while(node>=1) 
			{
                seg[node]=min(seg[2*node],seg[2*node+1]);
                node/=2;
            }
		}
		else
		{
			long long int Lt,Rt;
			cin>>Lt>>Rt;
			long long int Res=find(seg,1,0,NewN-1,Lt-1,Rt-1);
			cout<<Res<<endl;
		}
	}
}