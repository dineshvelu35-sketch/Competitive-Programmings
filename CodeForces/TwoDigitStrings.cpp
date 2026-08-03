#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S1,S2;
		cin>>S1>>S2;
		vector<vector<int>>dp(S1.size()+1,vector<int>(S2.size()+1,0));
		vector<int>I1(S1.size(),0),I2(S2.size(),0);
		I1[0]=(S1[0]-'0')%10;
		I2[0]=(S2[0]-'0')%10;
		for(int i=1;i<S1.size();i++)
		{
			I1[i]=(I1[i-1]+(S1[i]-'0'))%10;
		}
		for(int i=1;i<S2.size();i++)
		{
			I2[i]=(I2[i-1]+(S2[i]-'0'))%10;
		}
		if(I1[I1.size()-1]!=I2[I2.size()-1])
        {
            cout<<"-1"<<endl;
            continue;
        }
		for(int r=1;r<=S1.size();r++)
		{
			for(int c=1;c<=S2.size();c++)
			{
				if(I1[r-1]==I2[c-1])
				{
					dp[r][c]=dp[r-1][c-1]+1;
				}
				else
				{
					dp[r][c]=max(dp[r][c-1],dp[r-1][c]);
				}
			}
		}
		cout<<dp[S1.size()][S2.size()]<<endl;
	}
}