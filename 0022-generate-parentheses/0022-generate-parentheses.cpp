class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> Res;
        gen(0,0,n,"",Res);
        return Res; 
    }
    void gen(int Op, int Cp, int n, string curr, vector<string> &Res)
    {
        if(Op==Cp && Op+Cp==2*n)
        {
            Res.push_back(curr);
            return ;
        }
        if(Op<n)
        {
            gen(Op+1,Cp,n,curr+'(',Res);
        }
        if(Cp<Op)
        {
            gen(Op,Cp+1,n,curr+')',Res);
        }
    }
};