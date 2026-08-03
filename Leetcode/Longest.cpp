class Solution {
vector<int> Rdiff={0,0,-1,1};
vector<int> Cdiff={1,-1,0,0};
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) 
	{
		int R=matrix.size(),C=matrix[0].size(),ans=1;
       vector<vector<int> >path(R,vector<int>(C));
       for(int r=0;r<R;r++)
       {
       	for(int c=0;c<C;c++)
       	{
       		if(path[r][c]==0)
			{
				path[r][c]=dfs(r,c,R,C,matrix,path);
			}
		}
	   }
    }
    int dfs(int r,int c,int R,int C,vector<vector<int>>& matrix,vector<vector<int>>& path)
    {
    	if(path[r][c]!=0)
    	{
    		return path[r][c];
		}
		
		
	}
};
