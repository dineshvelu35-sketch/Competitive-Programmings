/*#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<numeric>*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int N,M,bonus;
int stitch(vector<vector<int>>& dp, vector<pair<int,int>>& ns,
vector<pair<int,int>>& ms,int nsi,int msi,int ptxt){
	if(nsi>=N && msi>=M) return 0;
	
	if(dp[nsi][msi]!=MOD){
		return dp[nsi][msi];
	}
	int maxpts=0;
	if(nsi<N){
		int nextpts=stitch(dp,ns,ms,nsi+1,msi,ns[nsi].first);
		int currpts=ns[nsi].second;
		if(ptxt==ns[nsi].first) currpts+=bonus;
		if(nextpts>0) currpts+=nextpts;
		maxpts=max(maxpts,currpts);
	}
	if(msi<M){
		int nextpts=stitch(dp,ns,ms,nsi,msi+1,ms[msi].first); 
		int currpts=ms[msi].second;
		if(ptxt==ms[msi].first) currpts+=bonus;
		if(nextpts>0) currpts+=nextpts;
		maxpts=max(maxpts,currpts);
	}
	dp[nsi][msi]=maxpts;
	return maxpts;
}
void solve(){	
 
   cin >> N >> M >> bonus;
   vector<pair<int,int>> ns(N),ms(M);
   for(int i=0;i<N;i++){
   	 int txt,pts;
   	 cin >> txt >> pts;
   	 ns[i]=make_pair(txt,pts);
   }
   for(int i=0;i<M;i++){
   	 int txt,pts;
   	 cin >> txt >> pts;
   	 ms[i]=make_pair(txt,pts);
   }
   vector<vector<int>> dp(N+1,vector<int>(M+1,MOD));
   
  
   int maxpts=stitch(dp,ns,ms,0,0,2000);
   cout << max(0,maxpts) << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T=1;
	//cin>>T;
	while(T--) solve();
}