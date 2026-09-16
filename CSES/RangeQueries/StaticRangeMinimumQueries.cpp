#include<bits/stdc++.h>
using namespace std;
long long int find(vector<long long int>&seg,long long int node,long long int nl,long long int nr,long long int ql,long long int qr)
{
	if(nr<ql||nl>qr)
	{
		return LLONG_MAX;
	}
	if(nl>=ql&&nr<=qr)
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
		long long int Lt,Rt;
		cin>>Lt>>Rt;
		long long int Res=find(seg,1,0,NewN-1,Lt-1,Rt-1);
		cout<<Res<<endl;
	}
}