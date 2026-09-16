// Problem: A. Monocarp's Contest
// Contest: Codeforces - Educational Codeforces Round 194 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2260/problem/A
// Memory Limit: 512 MB
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
		int ZeroCnt=0,OneCnt=0;
		vector<int>A(N);
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
			if(A[i]==0)
			{
				ZeroCnt++;
			}
			else
			{
				OneCnt++;
			}
		}
		if(ZeroCnt<2)
		{
			cout<<-1<<endl;
			continue;
		}
		else if((A[0]==0 && !A[N-1]==0) || (!A[0]==0 && A[N-1]==0))
		{
			cout<<1;
		}
		else if(A[0]==1 && A[N-1]==1)
		{
			cout<<2;
		}
		else if(A[0]==0 && A[N-1]==0)
		{
			cout<<0;
		}
		cout<<endl;
	}
}