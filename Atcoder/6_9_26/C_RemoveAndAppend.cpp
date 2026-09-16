// Problem: C - Remove and Append
// Contest: AtCoder - AtCoder Beginner Contest 474
// URL: https://atcoder.jp/contests/abc474/tasks/abc474_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q;
	cin>>N>>Q;
	vector<int>nums(N+Q),Res(N),vis(N+1,0);
	
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
	}
	int i=N;
	int T=Q;
	while(T--)
	{
		int qry;
		cin>>qry;
		nums[i++]=qry;
	}
	stack<int>st;
	for(int j=N+Q-1;j>=0;j--)
	{
		if(!vis[nums[j]])
		{
			st.push(nums[j]);
			vis[nums[j]]=true;
		}
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}