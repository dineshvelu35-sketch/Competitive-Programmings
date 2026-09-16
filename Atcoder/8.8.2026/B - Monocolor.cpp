#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>A(N);
	unordered_map<int,int>mp;
	int MaxRep=0;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		mp[A[i]]++;
		if(mp[A[i]]>MaxRep)
		{
			MaxRep=mp[A[i]];
		}
	}
	cout<<N-MaxRep;
}