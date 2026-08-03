#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>nums;
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
	}
	for(int i=0;i+1<N;i++)
	{
		if(nums[i]==nums[i+1])
		{
			nums.erase( nums.begin() + i + 1 );
			i--;
		}
	}
	for(int i=N-1;i>0;i++)
	{
		if(nums[i]==nums[i-1])
		{
			nums.erase( nums.end()-i - 1 );
			i++;
		}
	}
	for(int i=0;i<nums.size();i++)
	{
		cout<<nums[i]<<" ";
	}
	return 0;
}
