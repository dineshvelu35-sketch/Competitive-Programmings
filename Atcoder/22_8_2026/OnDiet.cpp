// Problem: C - On a Diet
// Contest: AtCoder - AtCoder Beginner Contest 472
// URL: https://atcoder.jp/contests/abc472/tasks/abc472_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,M,K;
	cin>>N>>M>>K;
	vector<int>A(N+1);
	for(int i=1;i<=N;i++)
	{
		cin>>A[i];
	}	
	vector<bool>vis(N+1);
	long long int CurrCal=0;
	for(int i=1;i<=N;i++)
	{
		if(CurrCal+A[i]<=K)
		{
			cout<<"Yes";
			CurrCal+=A[i];
			vis[i]=true;
		}
		else
		{
			
			cout<<"No";
		}
		if(i-M+1>0 && vis[i-M+1])
		{
			CurrCal-=A[i-M+1];
		}
		cout<<endl;
	}
	
}