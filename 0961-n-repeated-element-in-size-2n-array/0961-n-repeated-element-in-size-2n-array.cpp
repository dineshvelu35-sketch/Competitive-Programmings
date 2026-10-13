class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        int Max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            Max=max(Max,nums[i]);
        }
        vector<int>frq(Max+1,0);
        for(int i=0;i<nums.size();i++)
        {
               frq[nums[i]]++;
        }
        for(int i=0;i<=Max;i++)
        {   
            if(frq[i]>=nums.size()/2)
            {
                return i;
            }
        }
        return 0;
    }
};