#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,K;
	cin>>N>>M>>K;
	vector<int>nums(N+1);
	for(int i=1;i<=N;i++)
	{
		cin>>nums[i];
	}
	int o=1;
	vector<int>L(M+1),R(M+1),Val(M+1);
	while(M--)
	{
		cin>>L[o]>>R[o]>>Val[o];
		o++;
	}
	vector<int>odp(N+2);
        while(K--){
            int lt,rt;
            cin>>lt>>rt;
            odp[lt]+=1;
            odp[rt+1]-=1;
    }
    for(int i=1;i<=M;i++)
    {
    	odp[i]+=odp[i-1];
    }
    
	
	
	
}