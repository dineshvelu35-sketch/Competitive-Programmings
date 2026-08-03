#include<bits/stdc++.h>
using namespace std;
int main()
{
	int K;
	cin>>K;
	for(long long i=1;i<=K;i++)
	{
		long long Total=((i*i)*((i*i)-1))/2;
		long long Attack=4*(i-1)*(i-2);
		cout<<Total-Attack<<endl;
	}
	return 0;
