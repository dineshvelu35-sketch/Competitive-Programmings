// Problem: B - Old Maid
// Contest: AtCoder - AtCoder Beginner Contest 473
// URL: https://atcoder.jp/contests/abc473/tasks/abc473_b
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
	vector<int>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	int i=0;
	int Sum=0;
	while(i<A.size())
	{
		if(A[i]==A[i+1])
		{
			i+=2;
		}
		else
		{
			Sum+=A[i];
			i++;
		}
	}
	cout<<Sum;
}