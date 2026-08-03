#include<bits/stdc++.h>
using namespace std;
void dfs(vector<string> &str,vector<bool>Vis,int idx,int N,vector<string> &path)
{
	path.push_back(str[idx]);
	Vis[idx]=true;
	bool found=false;
	char Ch=tolower(str[idx].back());
	for(int i=0;i<N;i++)
	{
		if(tolower(str[i][0])==tolower(Ch) && !Vis[i])
		{
			dfs(str,Vis,i,N,path);
			found=true;
		}
	}
	if(!found)
	{
		for(int i=0;i<path.size();i++)
		{
			cout<<path[i];
			if(i+1!=path.size())
			{
				cout<<"->";
			}
			else
			{
				cout<<endl;
			}
		}
	}
	path.pop_back();
	Vis[idx]=false;
}
int main()
{
	int N;
	cin>>N;
	vector<string>Str(N);
	for(int i=0;i<N;i++)
	{
		cin>>Str[i];
	}
	char CH;
	cin>>CH;
	vector<bool>vis(N,0);
	vector<string>path;
	for(int i=0;i<N;i++)
	{
		if(CH==Str[i][0])
		{
			dfs(Str,vis,i,N,path);
		}
	}
}
/*#include<bits/stdc++.h>
using namespace std;
void dfs(vector<string> &str,vector<bool>Vis,int i,int N)
{
	cout<<str[i];
	char Ch=str[i][str[i].size()-1];
	Vis[i]=true;
	bool found=false;
	for(int i=0;i<N;i++)
	{
		if(tolower(str[i][0])==tolower(Ch) && !Vis[i])
		{
			cout<<"->";
			dfs(str,Vis,i,N);
			found=true;
		}
	}
	if(!found)
	{
		cout<<endl;
	}
}
int main()
{
	int N;
	cin>>N;
	vector<string>Str(N);
	for(int i=0;i<N;i++)
	{
		cin>>Str[i];
	}
	char CH;
	cin>>CH;
	vector<bool>vis(N,0);
	for(int i=0;i<N;i++)
	{
		if(CH==Str[i][0])
		{
			dfs(Str,vis,i,N);
		}
	}
}*/