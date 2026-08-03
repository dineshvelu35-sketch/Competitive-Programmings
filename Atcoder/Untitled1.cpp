//0 1 1 1 0 1
//1 1 1
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
	int i=0,j=i+1;
	int flag=1,MaxCount=0,count=0;
	while(i<N)
	{
		if(nums[i]==0)
		{
			if(nums[j]==1)
			{
				count++;
				MaxCount=max(MaxCount,count);
			}
			else if(nums[j]==0)
			{
				MaxCount=max(MaxCount,count);
				count=0;
				i=j-1;
			}
		}
		else if(nums[i]==1)
		{
			if(nums[j]==1)
			{
				if(j>=N-1)
				{
					count-=1;
					MaxCount=max(MaxCount,count);
					i=j-1;
				}
				else
				{
					count++;
					MaxCount=max(MaxCount,count);
				}
				j++;
			}
		}
	}
	cout<<MaxCount;
}
