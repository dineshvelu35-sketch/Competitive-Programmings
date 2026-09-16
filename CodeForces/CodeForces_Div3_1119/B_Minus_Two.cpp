// Problem: B. Minus Two
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Q;
	cin>>Q;
	while(Q--)
	{
		int N;
		cin>>N;
		map<int,int>mp;
		while(N--)
		{
			int curr;
			cin>>curr;
			if(curr%2==1)
			{
				mp[1]++;
			}
			else if(curr%4==0)
			{
				mp[4]++;
			}
			else
			{
				mp[2]++;
			}
		}
		cout<<max(mp[1],max(mp[4],mp[2]))<<endl;
	}
	return 0;
}