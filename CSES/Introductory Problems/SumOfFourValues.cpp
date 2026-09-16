// WHEN PRINTING ONLY ONE QUADRUPLES
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	vector<int>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	unordered_map<int,vector<pair<int,int>>> mp;
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			mp[A[i]+A[j]].push_back({i,j});
		}
	}
	set<vector<int>> St;
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			int Cmp=K-A[i]-A[j];
			if(mp.find(Cmp)!=mp.end())
			{
				for(auto& pair:mp[Cmp])
				{
					if(pair.first!=i && pair.second!=j && pair.first!=j && pair.second!=i)
					{
						vector<int> T={pair.first+1,pair.second
						+1,i+1,j+1};
						sort(T.begin(),T.end());
						cout<<T[0]<<" "<<T[1]<<" "<<T[2]<<" "<<T[3]<<endl;
						return 0; 
					}
				}
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}
//WHEN PRINTING ALL THE UNIQUE QUADRUPLES
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	vector<int>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	unordered_map<int,vector<pair<int,int>>> mp;
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			mp[A[i]+A[j]].push_back({i,j});
		}
	}
	set<vector<int>> St;
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			int Cmp=K-A[i]-A[j];
			if(mp.find(Cmp)!=mp.end())
			{
				for(auto& pair:mp[Cmp])
				{
					if(pair.first!=i && pair.second!=j && pair.first!=j && pair.second!=i)
					{
						vector<int> T={pair.first+1,pair.second
						+1,i+1,j+1};
						sort(T.begin(),T.end());
						St.insert(T);
					}
				}
			}
		}
	}
	if(St.empty())
	{
		cout<<"IMPOSSIBLE"<<endl;
		return 0;
	}
	vector<vector<int>> Ans(St.begin(),St.end());
	
	for(int i=0;i<Ans.size();i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<Ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/