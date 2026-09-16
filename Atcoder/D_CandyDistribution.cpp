// Problem: D - Candy Distribution
// Contest: AtCoder - AtCoder Beginner Contest 105
// URL: https://atcoder.jp/contests/abc105/tasks/abc105_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N,M;
	cin>>N>>M;
	long long Ans=0;
	int Rem=0;
	map<int,int>mp;
	mp[Rem]++;
	for(int i=0;i<N;i++)
	{
		int candy;
		cin>>candy;
		Rem=(Rem+candy)%M;
		if(mp.find(Rem)!=mp.end())
		{
			Ans+=mp[Rem];
			mp[Rem]++;
		}
		else
		{
			mp[Rem]++;
		}
	}
	cout<<Ans;
}