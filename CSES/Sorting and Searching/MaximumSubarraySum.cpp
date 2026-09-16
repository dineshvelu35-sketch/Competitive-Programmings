// Problem: Maximum Subarray Sum
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1643
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N;
	cin>>N;
	vector<long long int>nums(N);
	for(long long int i=0;i<N;i++)
	{
		cin>>nums[i];	
	}
	long long int CurrSum=nums[0];
	long long int MaxSum=nums[0];
	for(long long int i=1;i<N;i++)
	{
		CurrSum+=nums[i];
		CurrSum=max(CurrSum,nums[i]);		
		MaxSum=max(MaxSum,CurrSum);	
	}
	cout<<MaxSum;
}