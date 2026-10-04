class Solution {
public:
    bool checkValidString(string s) {
        if(s.empty())
        {
            return true;
        }
        if(s[0]==')')
        {
            return false;
        }
        stack<int>St,StCnt;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                St.push(i);
            }
            else if(s[i]=='*')
            {
                StCnt.push(i);
            }
            else if(s[i]==')')
            {
                if(!St.empty())
                {
                    St.pop();
                }
                else if(!StCnt.empty())
                {
                    StCnt.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        while(!St.empty() && !StCnt.empty())
        {
            if(St.top()<StCnt.top())
            {
                St.pop();
                StCnt.pop();
            }
            else
            {
                return false;
            }
        }
        if(St.empty())
        {
            return true;
        }
        return false;;
    }
};