#include<bits/stdc++.h>
using namespace std;
vector<int> RDiff={0,0,1,-1,1,1,-1,-1};
vector<int> CDiff={1,-1,0,0,1,-1,1,-1};
bool dfs(int r,int c,int R,int C,int i,bool skipped,string &Word,vector<vector<char>> &Hurdle)
{
	if(i==Word.size()-1)
	{
		return true;
	}
	else if(!skipped && i==Word.size()-2)
	{
		return true;
	}
	char Temp=Hurdle[r][c];
	Hurdle[r][c]='#';
	for(int idx=0;idx<8;idx++)
	{
		int adjR=r+RDiff[idx];
		int adjC=c+CDiff[idx];
		if(adjR>=0 && adjR<R && adjC>=0 && adjC<C)
		{
			if(Hurdle[adjR][adjC]==Word[i+1])
			{
				if(dfs(adjR,adjC,R,C,i+1,skipped,Word,Hurdle))
				{
					return true;
				}
			}
			else if(!skipped && i+2<Word.size() && Hurdle[adjR][adjC]==Word[i+2])
			{
				if(dfs(adjR,adjC,R,C,i+2,true,Word,Hurdle))
				{
					return true;
				}
			}
		}
	}
	Hurdle[r][c]=Temp;
	return false;
}
int main()
{
	int R,C;
	cin>>R>>C;
	vector<vector<char>>Hurdle(R,vector<char>(C));
	for(int row=0;row<R;row++)
	{
		for(int col=0;col<C;col++)
		{
			cin>>Hurdle[row][col];
		}
	}
	string S;
	cin>>S;
	if (S.empty()) 
	{ 
	cout << "False"; return 0; 
	}
	if (S.size() == 1) 
	{
		 cout << "True"; return 0; 
	}
	for(int row=0;row<R;row++)
	{
		for(int col=0;col<C;col++)
		{
			if(Hurdle[row][col]==S[0])
			{
				if(dfs(row,col,R,C,0,false,S,Hurdle))
				{
					cout<<"True";
					return 0;
				}
			}
			else if(Hurdle[row][col]==S[1])
			{
				if(dfs(row,col,R,C,1,true,S,Hurdle))
				{
					cout<<"True";
					return 0;
				}
			}
		}
	}
	cout<<"False";
	return 0;
}