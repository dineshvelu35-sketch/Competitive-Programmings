class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string Res="";
        stack<int>St;
        St.push(s[0]);
        int left=0;
        for(int i=1;i<s.size();i++)
        {
            if(!St.empty() && St.top()=='(' && s[i]==')')
            {
                St.pop();
            }
            else
            {
                St.push(s[i]);
            }
            if(St.empty())
            {
                string S=s.substr(left+1,i-left-1);
                Res+=S;
                left=i+1;
            }
        }
        return Res;
    }
};