// Problem: D - Coefficient Stair
// Contest: AtCoder - AtCoder Beginner Contest 473
// URL: https://atcoder.jp/contests/abc473/tasks/abc473_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<array>
#include<queue>
using namespace std;
using combo=array<int,10>;
#define ll unsigned long long int

vector<combo> ans;

void dfs(int slot,int bal,combo arr){
	if(slot==1){
		arr[slot-1]=bal;
		ans.push_back(arr);
		return;
	}
	arr[slot-1]=0;
	while(bal>=0){
		dfs(slot-1,bal,arr);
		arr[slot-1]++;
		bal-=slot;
	}
}
void solve(){
    int N,K; cin >> N >> K;
    combo arr;
    dfs(N,K,arr);
    sort(ans.begin(),ans.end());
    for(combo c:ans){
    	for(int i=0;i<N;i++){
    		cout << c[i] << (i+1==N?"\n":" ");
    	}
    }

}




int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T=1;
	//cin >> T;
	while(T--) solve();
}