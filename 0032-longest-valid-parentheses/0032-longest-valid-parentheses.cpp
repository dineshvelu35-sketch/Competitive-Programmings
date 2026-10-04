class Solution {
public:
    int longestValidParentheses(string s) {
        int MaxCnt=0;
        stack<int>par;
        par.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                par.push(i);
            }
            else
            {
                par.pop();
                if(par.empty())
                {
                    par.push(i);
                }
                else
                {
                    MaxCnt=max(MaxCnt,i-par.top());
                }
            }
            cout<<MaxCnt<<" "<<i<<" "<<par.top()<<endl;
        }
        return MaxCnt;
    }
};