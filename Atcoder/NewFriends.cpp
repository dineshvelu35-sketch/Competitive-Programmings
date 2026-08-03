#include<bits/stdc++.h>
using namespace std;
int find(vector<long long> &Leader,int Node)
{
	if(Leader[Node]==Node)
	{
		return Node;
	}
	Leader[Node]=find(Leader,Leader[Node]);
	return Leader[Node];
}
void join(vector<long long> &Leader,int Left,int Right)
{
	 Leader[find(Leader,Right)]=Leader[find(Leader,Left)];
}
int main()
{
	int N,M;
	cin>>N>>M;
	vector<vector<long long>> cells(M,vector<long long>(2));
	vector<long long>Leader(N+1);
	for(long long i=1;i<=N;i++)
	{
		Leader[i]=i;
	}
	for(long long i=0;i<M;i++)
	{
		cin>>cells[i][0]>>cells[i][1];
		join(Leader,cells[i][0],cells[i][1]);
	}
	vector<long long> Val(N+1,0),Edge(N+1,0);
	for(long long i=1;i<=N;i++)
	{
		int T=find(Leader,i);
		Val[T]++;
	}
	for(auto cell:cells)
	{
		int T=find(Leader,cell[0]);
		Edge[T]++;
	}
	long long Ans=0;
	for(long long i=1;i<=N;i++)
	{
		long long Vc=Val[i];
		long long Ec=Edge[i];
		Ans+=((Vc*(Vc-1))/2)-Ec;
	}
	cout<<Ans;	
}