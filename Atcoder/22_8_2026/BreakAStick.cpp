// Problem: B - Break a Stick
// Contest: AtCoder - AtCoder Beginner Contest 472
// URL: https://atcoder.jp/contests/abc472/tasks/abc472_b
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
	vector<int>nums(N);
	int Sum=0;
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
		Sum+=nums[i];
	}
	int CurrSum=0;
	int MinRes=INT_MAX;
	for(int i=0;i<N;i++)
	{
		CurrSum+=nums[i];
		Sum-=nums[i];
		MinRes=min(MinRes,abs(Sum-CurrSum));
	}
	cout<<MinRes;
}