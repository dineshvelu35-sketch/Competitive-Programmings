#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		vector<int>P(N);
		int Max=0;
		for(int i=0;i<N;i++)
		{
			cin>>P[i];
			Max=max(Max,P[i]);
		}
		int PlCount=0;
		for(int i=0;i<N;i++)
		{
			if(P[i]==Max)
			{
				PlCount++;
			}
		}
		cout<<PlCount<<endl;
	}
	return 0;
}