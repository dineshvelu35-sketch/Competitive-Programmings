#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		string S;
		cin>>S;
		if(N==1 || N%2==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		stack<char>st;
		for(int ch=0;ch<S.size();ch++)
		{
			if(st.empty())
			{
				st.push(S[ch]);
			}
			else if(st.top()==S[ch])
			{
				st.pop();
			}
			else
			{
				st.push(S[ch]);
			}
		}
		if(st.empty())
		{
			cout<<"YES"<<endl;
		}
		else
		{
		cout<<"NO"<<endl;
		}
	}
	return 0;
}