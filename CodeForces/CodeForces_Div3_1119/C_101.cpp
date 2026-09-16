// Problem: C. 101
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/C
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
		vector<int>A(N);
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		int lt=0,rt=N-1;
		while(lt<N && A[lt]==0)
		{
			lt++;
		}
		while(rt>=0 && A[rt]==0)
		{
			rt--;
		}
		if(lt<=rt)
		{
			for(int i=lt+1;i<rt;i++)
			{
				if(A[i]==-1)
				{
					A[i]=0;
				}
			}
			A[lt]=A[rt]=1;
		}
		for(int i=0;i<N;i++)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
}