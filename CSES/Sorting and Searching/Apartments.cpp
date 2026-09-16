#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,K;
	cin>>N>>M>>K;
	vector<int>Apnt(N),Apmt(M);
	for(int i=0;i<N;i++)
	{
		cin>>Apnt[i];
	}
	for(int i=0;i<M;i++)
	{
		cin>>Apmt[i];
	}
	sort(Apmt.begin(),Apmt.end());
	sort(Apnt.begin(),Apnt.end());
	int Cnt=0;
	int i=0,j=0;
	while(i<Apnt.size() && j<Apmt.size())
	{
		if(Apnt[i]+K<Apmt[j])
		{
			i++;
		}
		else if(Apnt[i]-K>Apmt[j])
		{
			j++;
		}
		else if(Apnt[i]+K>=Apmt[j] && Apnt[i]-K<=Apmt[j])
		{
			i++;
			j++;
			Cnt++;
		}
	}
	cout<<Cnt;
}