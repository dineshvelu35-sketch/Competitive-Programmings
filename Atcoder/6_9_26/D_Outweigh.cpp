// Problem: D - Outweigh
// Contest: AtCoder - AtCoder Beginner Contest 474
// URL: https://atcoder.jp/contests/abc474/tasks/abc474_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int> A(N),B(N);
	unsigned int ACnt=0,BCnt=0;
	
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		ACnt+=A[i]*A[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>B[i];
		BCnt+=A[i]*B[i];
	}
	int am=0,bm=0;
	for(int i=0;i<N;i++)
	{
		if(A[i]>B[i])
		{
			am+=(A[i]-B[i]);
		}
		else if(A[i]<B[i])
		{
			bm+=(B[i]-A[i]);
		}
	}
	if(am==0)
	{
		cout<<"No";
		return 0;
	}
	unsigned int amwt=(bm/am)+2;
	cout<<"Yes"<<endl;
	for(int i=0;i<N;i++)
	{
		if(A[i]<=B[i])
		{
			cout<<1<<" ";
		}
		else
		{
			cout<<amwt<<" ";
		}
	}
	return 0;
}