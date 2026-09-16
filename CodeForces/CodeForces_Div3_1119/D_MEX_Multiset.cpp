// Problem: D. MEX Multiset
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/D
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
		vector<int>Ar(N),zi;
		for(int i=0;i<N;i++)
		{
			cin>>Ar[i];
			if(Ar[i]==0)
			{
				zi.push_back(i);
			}
		}
		if(zi.size()==1)
		{
			cout<<"No"<<endl;
			continue;
		}
		string S(N,'A');
		if(zi.size()>0)
		{
			S[zi[0]]='B';
			for(int i=1;i<zi.size();i++)
			{
				S[zi[i]]='C';
			}
		}
		cout<<"Yes"<<endl;
		cout<<S<<endl;
	}
	
}