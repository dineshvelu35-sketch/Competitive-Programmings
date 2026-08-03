#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>encoded(N);
	int F;
	cin>>F;
	vector<int>decoded(N+1);
	for(int i=0;i<N;i++)
	{
		cin>>encoded[i];
	}
	decoded[0]=F;
	int j=1;
	for(int i=0;i<N;i++)
	{
		decoded[j]=decoded[i]^encoded[i];
		j++;
	}
	for(int i=0;i<N+1;i++)
	{
		cout<<decoded[i]<<" ";
	}
	
}
