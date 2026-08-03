#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	//cout<<s;
	int j=s.size()-1;
	string T="",R="";
	while(j>=0)
	{
		while(j>=0 && s[j]!=' ')
		{
			T.push_back(s[j]);
			j--;
		}
		reverse(T.begin(),T.end());
		R+=T;
		T="";
		R.push_back(' ');
		j--;
	}
	cout<<R;
	
}