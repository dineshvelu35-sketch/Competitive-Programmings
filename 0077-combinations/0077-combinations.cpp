class Solution {
public:
    void back(int idx, int N, int k, vector<vector<int>> &Res, vector<int> &path)
    {
        if(path.size()==k)
        {
            Res.push_back(path);
            return;
        }
        for(int i=idx;i<=N;i++)
        {
            path.push_back(i);
            back(i+1,N,k,Res,path);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>Res;
        vector<int>path;
        back(1,n,k,Res,path);    
        return Res;
    }
};