#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> dir = {0,-1,0,1,0};

private:
    bool find(int r,int c,int ctr,int itm,int R,int C,
              vector<vector<char> >&board,vector<string>&words)
    {
        if(itm==words[ctr].size())
            return true;

        char ch = board[r][c];
        board[r][c] = '-';

        for(int idx=0; idx<4; idx++)
        {
            int adjR = r + dir[idx];
            int adjC = c + dir[idx+1];

            if(adjR>=0 && adjR<R && adjC>=0 && adjC<C &&
               board[adjR][adjC]==words[ctr][itm])
            {
                if(find(adjR,adjC,ctr,itm+1,R,C,board,words))
                    return true;
            }
        }

        board[r][c] = ch;
        return false;
    }

public:
    vector<string> findWords(vector<vector<char> >& board, vector<string>& words) 
    {
        vector<string> Ans;
        int R=board.size(), C=board[0].size();

        for(int r=0;r<R;r++)
        {
            for(int c=0;c<C;c++)
            {
                for(int ctr=0;ctr<words.size();ctr++)
                {
                    if(board[r][c]==words[ctr][0])
                    {
                        bool found=find(r,c,ctr,1,R,C,board,words);
                        if(found)
                            Ans.push_back(words[ctr]);
                    }
                }
            }
        }
        return Ans;
    }
};

int main()
{
    int m,n;
    cin>>m>>n;

    vector<vector<char>> board(m, vector<char>(n));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>board[i][j];

    int w;
    cin>>w;
    vector<string> words(w);
    for(int i=0;i<w;i++)
        cin>>words[i];

    Solution obj;
    vector<string> result = obj.findWords(board, words);

    cout<<"Found words:\n";
    for(auto &s : result)
        cout<<s<<" ";
}
