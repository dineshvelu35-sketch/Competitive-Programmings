// Problem: D - Chargers
// Contest: AtCoder - AtCoder Beginner Contest 471
// URL: https://atcoder.jp/contests/abc471/tasks/abc471_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Q,V;
	cin>>Q>>V;
	priority_queue<int>pq;
	while(Q--)
	{
		int Step;
		cin>>Step;
		if(Step==1)
		{
			int Time,Charge;
			cin>>Time>>Charge;
			pq.push(Charge-Time);
		}
		else
		{
			int Time;
			cin>>Time;
			if(pq.empty())
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<min(V,pq.top()+Time)<<endl;
				pq.pop();
			}
		}
	}
	return 0;
}