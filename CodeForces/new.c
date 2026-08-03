#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>nums[N];
	for(int i=0;i<N;i++){
		cin>>nums[i];
	}
	sum=nums[0];
	for(int i=1;i<N;i++)
	{
		sum=nums[i]+sum;
		nums[i]=sum;
	}
	for(int i=0;i<N;i++)
	{
		cout<<nums[i]<<" ";
	}
}
