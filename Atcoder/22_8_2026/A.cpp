// Problem: A - A
// Contest: AtCoder - AtCoder Beginner Contest 472
// URL: https://atcoder.jp/contests/abc472/tasks/abc472_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cin>>S;
	for(int i=0;i<S.size();i++)
	{
		if(S[i]!='A')
		{
			cout<<".";
		}
		else
		{
			cout<<"A";
		}
	}
	return 0;
}
