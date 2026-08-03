#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&A)
{
	int i;
	for(i=0;i<A.size();i++)
	{
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	A.erase(unique(A.begin(),A.end()),A.end())
	int Best=0,Curr=1;
	for(i=1;i<A.size();i++)
	{
		if(A[i]==A[i-1]+1)
		{
			Curr++;
		}
		else
		{
			Best=max(Best,Curr);
			Curr=1;
		}
	}
	Best=max(Best,Curr);
	return Best;
}
int main()
{
	int i,T;
	cin>>T;
	for(i=0;i<T;i++)
	{
		int N;
		cin>>N;
		vector<int>A(N);
		for(int j=0;j<N;j++)
		{
			cin>>A[i];
		}
		cout<<solve(A)<<endl;
	}
}
