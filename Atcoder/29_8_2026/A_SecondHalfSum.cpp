// Problem: A - Second Half Sum
// Contest: AtCoder - AtCoder Beginner Contest 473
// URL: https://atcoder.jp/contests/abc473/tasks/abc473_a
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
	int half=N/2;
	int Sum=0;
	for(int i=half;i<N;i++)
	{
		Sum+=A[i];
	}
	cout<<Sum;
	return 0;
}