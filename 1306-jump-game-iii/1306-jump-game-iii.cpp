class Solution {
public:
    bool bfs(int idx, vector<int> &arr, vector<int> &vis)
    {
        vis[idx]=1;
        queue<int>q;
        q.push(idx);
        while(!q.empty())
        {
            int Cidx=q.front();
            q.pop();
            if(arr[Cidx]==0)
            {
                return true;
            }
            if(Cidx+arr[Cidx]<arr.size() && vis[Cidx+arr[Cidx]]==0)
            {
                q.push(Cidx+arr[Cidx]);
                vis[Cidx+arr[Cidx]]=1;
            }
            if(Cidx-arr[Cidx]>=0 && vis[Cidx-arr[Cidx]]==0)
            {
                q.push(Cidx-arr[Cidx]);
                vis[Cidx-arr[Cidx]]=1;
            }
        }
        return false;
    }
    bool canReach(vector<int>& arr, int start) 
    {
        vector<int>vis(arr.size(),0);
        return bfs(start,arr,vis);
    }
};