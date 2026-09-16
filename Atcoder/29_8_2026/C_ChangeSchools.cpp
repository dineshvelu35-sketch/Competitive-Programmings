// Problem: C - Change Schools
// Contest: AtCoder - AtCoder Beginner Contest 473
// URL: https://atcoder.jp/contests/abc473/tasks/abc473_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	vector<int>A(N);
	int MaxRep=-1;
	vector<int>Cls(K+1,0);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		Cls[A[i]]++;
		if(MaxRep<Cls[A[i]])
		{
			MaxRep=Cls[A[i]];
		}
	}
	int Schl=0;
	int start=1,end=K;
	for(int start=1;start<=K;start++)
	{
		if(Cls[start]==MaxRep || Cls[start]==MaxRep-1)
		{
			Schl++;
		}
	}
	cout<<Schl;
}