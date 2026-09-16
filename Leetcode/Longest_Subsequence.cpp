#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> nums(N,0);
	for(int i = 0 ; i < N ; i++) cin >> nums[i];
	int maxlen = 0;
        unordered_set<int> seen (nums.begin(),nums.end());
        for(int num : seen){
            if(!seen.count(num-1)){
                int ctr = 1, currlen = 1;
                while(seen.count(num+ctr)){
                    currlen++;
                    ctr++;
                }
                maxlen = max(maxlen,currlen);
            }
        }
	cout << maxlen;
}