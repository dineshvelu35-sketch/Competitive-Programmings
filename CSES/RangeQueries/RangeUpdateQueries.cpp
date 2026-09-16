// Problem: Range Update Queries

// Contest: CSES - CSES Problem Set

// URL: https://cses.fi/problemset/task/1651

// Memory Limit: 512 MB

// Time Limit: 1000 ms

// 

// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define ll long long
#define INF 2e9
using namespace std;
void update(vector<long long>& seg,int node,int nl,int nr,int ql,int qr,int add)
{
	if(nl>qr || nr<ql)
	{
		return;
	}
	if(ql<=nl && qr>=nr)
	{
		seg[node]+=add;
		return;
	}
	int mid=(nl+nr)/2;
	update(seg,node*2,nl,mid,ql,qr,add);
	update(seg,node*2+1,mid+1,nr,ql,qr,add);
}
long long find(vector<long long>& seg,int node,int nl,int nr,int ind)
{
	if(nl==nr)
	{
		return seg[node];
	}
    int mid=(nl+nr)/2;
    if(ind>mid)
    {
    	return seg[node]+find(seg,node*2+1,mid+1,nr,ind);
    }
    else
    {
    	return seg[node]+find(seg,node*2,nl,mid,ind);
    }
}
void solve()
{
	int N,Q; 
	cin>>N>>Q;
	int newN=1;
	while(newN<N)
	{
		newN=newN<<1;
	}
	vector<long long>seg((newN*2)+1,0);
	for(int in=1;in<=N;in++)
	{
		cin>>seg[newN+in-1];
	}
	while(Q--)
	{
		int qt; 
		cin>>qt;
		if(qt==1)
		{
			int st,end,add; cin>>st>>end>>add;
			update(seg,1,1,newN,st,end,add);
		}
		else
		{
			int ind; 
			cin>>ind;
			cout<<find(seg,1,1,newN,ind)<<endl;
		}
	}
}
int main()
{
	int tc=1;
	while(tc--)
	{
		solve();
	}
}