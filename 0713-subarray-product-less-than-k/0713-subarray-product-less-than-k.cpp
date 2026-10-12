class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int Product=1,Count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                Product*=nums[j];
                if(Product<k)
                {
                    Count++;
                }
                else
                {
                    break;
                } 
            }
            Product=1;
        }
        return Count;
    }
};