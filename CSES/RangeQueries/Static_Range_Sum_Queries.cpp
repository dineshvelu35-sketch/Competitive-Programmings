#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,Q;
	cin>>N>>Q;
	vector<long long int>PreSum(N,0);
	for(long long int i=1;i<=N;i++)
	{
		long long int Temp;
		cin>>Temp;
		if(i==1)
		{
			PreSum[i]+=Temp;
		}
		else
		{
			PreSum[i]=Temp+PreSum[i-1];
		}
	}
	while(Q--)
	{
		long long int S,E;
		cin>>S>>E;
		cout<<PreSum[E]-PreSum[S-1]<<endl;
	}
}