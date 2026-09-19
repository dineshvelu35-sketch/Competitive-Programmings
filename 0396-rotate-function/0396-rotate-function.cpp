class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        long long finval=0,Sum=0;
        for(int i=0;i<nums.size();i++)
        {
            finval+=(i*nums[i]);
            Sum+=nums[i];
        }
        long long Ans=finval;
        for(int li=nums.size()-1;li>=0;li--)
        {
            finval=finval+Sum-nums.size()*nums[li];
            Ans=max(finval,Ans);
        }
        return (int)Ans;

    }
};