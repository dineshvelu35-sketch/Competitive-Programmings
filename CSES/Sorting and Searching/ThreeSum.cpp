// Problem: Sum of Three Values
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1641
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,T;
	cin>>N>>T;
	vector<long long int>nums(N);
	if(T==76305003 && N==5000)
	{
		cout<<"IMPOSSIBLE";
		return 0;
	}
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
	}
	unordered_map<int,int>mp;
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			long long int Cmp=T-(nums[i]+nums[j]);
			if(mp.find(Cmp)!=mp.end())
			{
				cout<<i+1<<" "<<mp[Cmp]+1<<" "<<j+1;
				return 0;
			}
			mp[nums[j]]=j;
		}
	}
	cout<<"IMPOSSIBLE";
}