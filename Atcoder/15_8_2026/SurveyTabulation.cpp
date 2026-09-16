#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	unordered_map<string,int>mp;
	int MaxCnt=0;
	for(int i=0;i<N;i++)
	{
		string S;
		cin>>S;
		transform(S.begin(),S.end(),S.begin(), ::tolower);
		mp[S]++;
		MaxCnt=max(MaxCnt,mp[S]);
	}
	cout<<MaxCnt;
}