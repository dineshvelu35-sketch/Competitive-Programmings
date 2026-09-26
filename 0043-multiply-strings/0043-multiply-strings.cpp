class Solution {
public:
    string multiply(string num1, string num2) 
    {
        if(num1=="0" || num2=="0")
        {
            return "0";
        }
        int n1=num1.size();
        int n2=num2.size();
        string Res="";
        vector<int> res(n1+n2,0);
        for(int i=n1-1;i>=0;i--)
        {
            for(int j=n2-1;j>=0;j--)
            {
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int sum=mul+res[i+j+1];
                res[i+j+1]=sum%10;
                res[i+j]+=sum/10;

            }
        }
        for(auto num:res)
        {
            if(!(Res.empty() && num==0))
            {
                Res+=num+'0';
            }
        }
        return Res;
    }
};