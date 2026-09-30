class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) 
    {
        int Res=0;
        vector<int>Ans;
        for(int i=0;i<seq.size();i++)
        {
            if(seq[i]=='(')
            {
                Res++;
                Ans.push_back(Res%2);
            }
            else
            {
                Ans.push_back(Res%2);
                Res--;
            }
        } 
        return Ans;
    }
};