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
	//sort(nums.begin(),nums.end());
	int k=1;
	for(int i=0;i<N;i++)
	{
		if(i-1>=0 && nums[i-1]!=nums[i]){
			nums[k]=nums[i];
			k++;
		}
		
	}
	cout<<k;

}
