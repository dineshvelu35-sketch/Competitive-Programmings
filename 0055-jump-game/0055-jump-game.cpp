class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int MaxReach=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(MaxReach<i)
            {
                return false;
            }
            MaxReach=max(MaxReach,i+nums[i]);
        }  
        return true;
    }
};