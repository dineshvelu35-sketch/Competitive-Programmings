#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cin>>S;
	int Ans=0;
	int Rem=0,PvTen=1;
	long long BASE=2019;
	map<int,int>mp;
	mp[Rem]++;
	for(int i=S.size()-1;i>=0;i--)
	{
		Rem=(Rem+((S[i]-'0')*PvTen))%BASE;
		if(mp.find(Rem)!=mp.end())
		{
			Ans+=mp[Rem];
			mp[Rem]++;
		}
		else
		{
			mp[Rem]++;
		}
		PvTen=(PvTen*10)%BASE;
	}
	cout<<Ans;
}