// Problem: E - Sorting Queries
// Contest: AtCoder - AtCoder Beginner Contest 217
// URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Q;
	cin>>Q;
	vector<int>A;
	multiset<int>mp;
	int itr=0;
	while(Q--)
	{
		int N;
		cin>>N;
		if(N==1)
		{
			int x;
			cin>>x;
			A.push_back(x);
		}
		else if(N==2)
		{
			if(mp.empty())
			{
				cout<<A[itr]<<endl;
				itr++;
			}
			else
			{
				int it=*mp.begin();;
				cout<<it<<endl;
				mp.erase(mp.begin());
			}
		}
		else if(N==3)
		{
			if(A.size()==0)
			{
				continue;
			}
			else
			{
				mp.insert(A.begin()+itr,A.end());
				A.clear();
				itr=0;
			}
		}
	}
	return 0;
}