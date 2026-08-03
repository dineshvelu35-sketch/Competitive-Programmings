#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cin>>S;
	int i=0,j=0,k=0,Count=0;
	while(i<S.size() && j<S.size() && k<S.size())
	{
		while(i<S.size() && S[i]!='A')
		{
			i++;
			j++;
			k++;
		}
		while(j<S.size() && S[j]!='B')
		{
			j++;
			k++;
		}
		while(k<S.size() && S[k]!='C')
		{
			k++;
		}
		if( i<S.size() && j<S.size() && k<S.size() && S[i]=='A' && S[j]=='B' && S[k]=='C')
		{
			S.erase(i,1);
			S.erase(j-1,1);
			S.erase(k-2,1);
			Count++;
			j=i;
			k=i+1;
		}
		else
		{
			break;
		}	
	}
	cout<<Count;
	return 0;
}
