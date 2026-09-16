#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N==2 || N==3)
	{
		cout<<"NO SOLUTION";
		return 0;
	}
	for(int i=1;i<=N;i++)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
		}
	}
	for(int i=1;i<=N;i++)
	{
		if(i%2==1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}