class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int Left=binary(nums,target,true);
        int Right=binary(nums,target,false);  
        vector<int>Res(2,-1);
        Res[0]=Left;
        Res[1]=Right; 
        return Res;
    }
    int binary(const vector<int> &nums,int target,bool IsLeft)
    {
        int i=0,j=nums.size()-1;
        int idx=-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]>target)
            {
                j=mid-1;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
            else
            {
                idx=mid;
                if(IsLeft)
                {
                    j=mid-1;
                }
                else
                {
                    i=mid+1;
                }
            }
        }
        return idx;
    }
};