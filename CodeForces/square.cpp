#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int> nums(N);
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
		nums[i]=nums[i]*nums[i];
	}
	for(int i=0;i<N;i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(nums[i]>nums[j])
			{
				int temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		cout<<nums[i]<<" ";
	}
	return 0;
	
}
