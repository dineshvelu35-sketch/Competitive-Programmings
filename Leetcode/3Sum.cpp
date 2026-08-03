#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>threeSum(vector<int>& nums)
{
	    vector<vector<int>>Res;
	    sort(nums.begin(),nums.end());
	    for(int i=0;i<nums.size()-1;i++)
	    {
	    	if(i>0 && nums[i-1]==nums[i])
	    	{
	    		continue;
	    	}
	    	unordered_set<int>St;
	    	for(int j=i+1;j<nums.size();j++)
	    	{
	    		int Cmp=-(nums[i]+nums[j]);
	    		if(St.count(Cmp))
	    		{
	    			Res.push_back({nums[i],Cmp,nums[j]});
	    			while(j+1<nums.size() && nums[j]==nums[j+1])
	    			{
	    				j++;
	    			}
	    		}
	    		St.insert(nums[j]);
	    	}
	    }
	    return Res;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<vector<int>>ans=threeSum(nums);
    if(ans.empty())
    {
        cout<<"No Triplets Found";
    }
    else
    {
        for(auto triplet:ans)
        {
            for(int x:triplet)
                cout<<x<< " ";
            cout<<endl;
        }
    }
    return 0;
}