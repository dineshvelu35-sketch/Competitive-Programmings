// Problem: B - Exit Order
// Contest: AtCoder - AtCoder Beginner Contest 474
// URL: https://atcoder.jp/contests/abc474/tasks/abc474_b
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
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
	}
	int i=0;
	while(i<nums.size())
	{
		int limit;
		if((i+10)<=nums.size())
		{
			limit=i+10;
		}
		else
		{
			limit=nums.size();
		}
		for(;i<limit;i++)
		{
			if(nums[i]>limit)
			{
				cout<<"No";
				return 0;
			}
		}
	}
	cout<<"Yes";
	return 0;
	
}