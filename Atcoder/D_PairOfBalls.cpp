// Problem: D - Pair of Balls
// Contest: AtCoder - AtCoder Beginner Contest 216
// URL: https://atcoder.jp/contests/abc216/tasks/abc216_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	vector<queue<int>>Cyldr;
	unordered_map<int,vector<int>>mp;
	queue<int>removed;
	for(int i=0;i<M;i++)
	{
		int k;
		cin>>k;
		queue<int>EachCyldr;
		while(k--)
		{
			int ball;
			cin>>ball;
			EachCyldr.push(ball);
		}
		Cyldr.push_back(EachCyldr);
		mp[EachCyldr.front()].push_back(i);
		if(mp[EachCyldr.front()].size()==2)
		{
			removed.push(EachCyldr.front());
		}
	}
	int Count=0;
	while(!removed.empty())
	{
		Count++;
		int ind1=mp[removed.front()][0];
		int ind2=mp[removed.front()][1];
		Cyldr[ind1].pop();
		Cyldr[ind2].pop();
		if(!Cyldr[ind1].empty())
		{
			mp[Cyldr[ind1].front()].push_back(ind1);
			if(mp[Cyldr[ind1].front()].size()==2)
			{
				removed.push(Cyldr[ind1].front());
			}
		}
		if(!Cyldr[ind2].empty())
		{
			mp[Cyldr[ind2].front()].push_back(ind2);
			if(mp[Cyldr[ind2].front()].size()==2)
			{
				removed.push(Cyldr[ind2].front());
			}
		}
		removed.pop();
	}
	cout<<((Count==N)?"Yes":"No");
	
}