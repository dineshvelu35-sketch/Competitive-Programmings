#include<bits/stdc++.h>
using namespace std;
void bfs(int idx,int Col,unordered_map<int,vector<int>> &g,vector<int> &hops,vector<int> &color)
{
    queue<int> jump;
    jump.push(idx);
    hops[idx]=0;
    while(!jump.empty())
    {
        int u=jump.front();
        jump.pop();
        for (int v:g[u])
        {
            if (hops[v]==-1)
            {
                hops[v]=hops[u]+1;
                color[v]=Col;
                jump.push(v);
            }
        }
	}
}
int main()
{
	int N;
	cin>>N;
	unordered_map<int,vector<int>>g;
	for(int i=1;i<N;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	vector<int> hops(N+1,0),color(N+1,0);
	int Blck=1,Wht=2;
	int b=0,w=0;
	vector<int> distF(N+1,-1);
	vector<int> distS(N+1,-1);
	bfs(1,Blck,g,distF,color);
	bfs(N,Wht,g,distS,color);
	for(int i=1;i<=N;i++)
	{
		if(distF[i]<=distS[i])
		{
			b++;
		}	
		else
		{
			w++;
		}
		
	}
	cout<<((w<b)?"Fennec":"Snuke");
	return 0;
}