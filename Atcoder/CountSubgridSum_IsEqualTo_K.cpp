)#include<bits/stdc++.h>
using namespace std;
int main()
{
	int H,W,K;
	cin>>H>>W>>K;
	vector<vector<int>>dp(H+1,vector<int>(W+1,0));
	for(int r=1;r<=H;r++)
	{
		string S;
		cin>>S;
		for(int c=1;c<=W;c++)
		{
			dp[r][c]=S[c-1]-'0';
		}
	}
	for(int r=1;r<=H;r++)
	{
		for(int c=2;c<=W;c++)
		{
			dp[r][c]+=dp[r][c-1];
		}
	}
	for(int c=1;c<=W;c++)
	{
		for(int r=2;r<=H;r++)
		{
			dp[r][c]+=dp[r-1][c];
		}
	}
	int Cnt=0;
	for(int r=1;r<=H;r++)
	{
		for(int c=1;c<=W;c++)
		{
			for(int tr=0;tr<r;tr++)
			{
				for(int tc=0;tc<c;tc++)
				{
					int sms=dp[r][c]+dp[tr][tc]-dp[tr][c]-dp[r][tc];
					if(sms==K)
					{
						Cnt++;
					}
				}
			}
		}
	}
	cout<<Cnt;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n , m , k;
    cin >> n >> m >> k;
    vector<vector<int>>a(n+1,vector<int>(m+1,0));
    for ( int i = 1 ; i <= n ; i ++ )
    {
    	string b;
    	cin >> b;
    	for ( int j = 1 ; j <= m ; j ++ )
    	{
    		a[i][j] = b[j-1] - '0';
    		a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
		}
	}
	long long ans = 0;
	for ( int x1 = 1 ; x1 <= n ; x1 ++ )
		for ( int y1 = 1 ; y1 <= m ; y1 ++ )
			for ( int x2 = x1 ; x2 <= n ; x2 ++ )
				for ( int y2 = y1 ; y2 <= m ; y2 ++ )
					if ( a[x2][y2] - a[x1-1][y2] - a[x2][y1-1] + a[x1-1][y1-1] == k )
						ans ++;
	cout << ans;
    return 0;
}
