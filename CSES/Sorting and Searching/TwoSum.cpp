#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,T;
	cin>>N>>T;
	vector<pair<int,int>>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i].first;
		A[i].second=i+1;
	}
	sort(A.begin(),A.end());
	int i=0,j=A.size()-1;
	while(i<j)
	{
		int Cmp=A[i].first+A[j].first;
		if(Cmp==T)
		{
			cout<<A[i].second<<" "<<A[j].second;
			return 0;
		}
		else if(Cmp>T)
		{
			j--;
		}
		else if(Cmp<T)
		{
			i++;
		}
	}
	cout<<"IMPOSSIBLE";
}