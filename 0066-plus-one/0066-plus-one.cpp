class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>Res;
        int i=digits.size()-1;
        int carry=1;
        while(i>=0)
        {
            int curr=digits[i]+carry;
            carry=curr/10;
            Res.push_back(curr%10);
            i--;
        }
        if(carry)
        {
            Res.push_back(carry);
        }
        reverse(Res.begin(),Res.end());
        return Res;

    }
};