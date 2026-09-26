class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string Res="";
        int curr;
        while(i>=0 && j>=0 )
        {
            curr=(num1[i]-'0')+(num2[j]-'0')+carry;
            carry=curr/10;
            Res+=(curr%10)+'0';
            i--;
            j--;
        }
        while(i>=0)
        {
            curr=(num1[i]-'0')+carry;
            carry=curr/10;
            Res+=(curr%10)+'0';
            i--;
        }
        while(j>=0)
        {
            curr=(num2[j]-'0')+carry;
            carry=curr/10;
            Res+=(curr%10)+'0';
            j--;
        }
        if(carry)
        {
            Res+=carry+'0';
        }
        reverse(Res.begin(),Res.end());
        return Res;
    }
};