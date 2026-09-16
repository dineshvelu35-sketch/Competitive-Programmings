// Problem: F - Bread
// Contest: AtCoder - AtCoder Beginner Contest 252
// URL: https://atcoder.jp/contests/abc252/tasks/abc252_f
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N,L;
	cin>>N>>L;	
	priority_queue<long long,vector<long long>,greater<>>q;
	long long Sum=0LL;
	for(int ctr=1;ctr<=N;ctr++)
	{
		int Curr;
		cin>>Curr;
		Sum+=Curr;
		q.push(Curr);
	}
	if(Sum<L)
	{
		q.push(L-Sum);
	}
	long long ans=0LL;
	while(q.size()>1)
	{
		long long merged=q.top();
		q.pop();
		merged+=q.top();
		q.pop();
		ans+=merged;
		q.push(merged);
	}
	cout<<ans;
}