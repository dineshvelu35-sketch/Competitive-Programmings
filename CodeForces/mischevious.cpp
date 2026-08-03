#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>nums(N);
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
	}
	int Max=nums[0];
	for(int i=1;i<N;i++)
	{
		Max=max(Max,nums[i]);
	}
    vector<int>frq(Max,0);
    int j;
    for(j=0;j<N;j++)
    {
        frq[nums[j]]++;
    }
    for(j=0;j<=Max;j++)
    {
        if(frq[j]>1)
        {
            printf("%d ",j);
        }
    }
    return 0;
}
