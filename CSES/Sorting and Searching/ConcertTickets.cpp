// Problem: Concert Tickets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1091
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M;
	multiset<int>tickets;
	cin>>N>>M;
	for(int i=0;i<N;i++)
	{
		int x;
		cin>>x;
		tickets.insert(x);
	}
	while(M--)
	{
		int x;
		cin>>x;
		auto it=tickets.upper_bound(x);
		if(it==tickets.begin())
		{
			cout<<"-1"<<endl;
		}
		else
		{
			--it;
			cout<<*it<<endl;
			tickets.erase(it);
		}
	}
	return 0;
}