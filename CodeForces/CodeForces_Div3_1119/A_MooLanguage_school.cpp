// Problem: A. Moo Language School
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		int N,K;
		cin>>N>>K;
		string s;
		cin>>s;
		unsigned int F=N/K;
		vector<bool>own(F,0);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='0')
			{
				unsigned int farmidx=i/K;
				own[farmidx]=true;
			}
		} 
		unsigned int Cnt=0;
		for(int f=0;f<F;f++)
		{
			if(!own[f])
			{
				Cnt++;
			}
		}
		cout<<Cnt<<endl;
	}
}