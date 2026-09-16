#include<iostream>
#include<string>
using namespace std;
int main()
{
	string S;
	cin>>S;
	int Ct=1,MxCt=1;
	for(int i=1;i<S.size();i++)
	{
		if(S[i]==S[i-1])
		{
			Ct++;
		}
		else
		{
			Ct=1;
		}
		if(Ct>MxCt)
		{
			MxCt=Ct;
		}		
	}
	cout<<MxCt;
	return 0;
}
