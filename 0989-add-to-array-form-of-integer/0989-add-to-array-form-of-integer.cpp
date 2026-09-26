class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        int carry=0;
        vector<int>Res;
        while(i>=0 && k>0)
        {
            int curr=num[i]+k%10+carry;
            carry=curr/10;
            Res.push_back(curr%10);
            i--;
            k/=10;
        }        
        while(i>=0)
        {
            int curr=num[i]+carry;
            carry=curr/10;
            Res.push_back(curr%10);
            i--;
        }
        while(k>0)
        {
            int curr=k%10+carry;
            carry=curr/10;
            Res.push_back(curr%10);
            k/=10;
        }
        if(carry)
        {
            Res.push_back(carry);
        }
        reverse(Res.begin(),Res.end());
        return Res;
    }
};