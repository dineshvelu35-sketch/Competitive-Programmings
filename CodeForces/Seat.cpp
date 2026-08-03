#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long N;
		cin>>N;
		string bin;
		cin>>
		if(N==1)
		{
			cout<<(bin[0] !="1"?"1":"0")<<endl;
			continue;
		}
		for(int i=1;i<N-1;i++)
		{
			if(bin[i] !="1" && bin[i+1] !="1" && bin[i-1] !="1")
			{
				bin[i]="1";
			}
		}
		int Count=0;
		for(int i=0;i<N;i++)
		{
			if(bin[i]=="1")
			{
				Count++;
			}
		}
		cout<<Count<<endl;
	}
	return 0;
}
