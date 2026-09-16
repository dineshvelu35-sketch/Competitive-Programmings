// Problem: C - Many Balls
// Contest: AtCoder - AtCoder Beginner Contest 216
// URL: https://atcoder.jp/contests/abc216/tasks/abc216_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N;
	cin>>N;
	string S="";
	while(N>0)
	{
		if(!(N&1))
		{
			N/=2;
			S+='B';
		}
		else
		{
			N-=1;
			S+='A';
		}
	}
	reverse(S.begin(),S.end());
	cout<<S;
}