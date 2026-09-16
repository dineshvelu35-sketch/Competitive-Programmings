#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	vector<pair<int,int>>Box(M),Swt(N);
	for(int idx=0;idx<N;idx++)
	{
		int temp;
		cin>>temp;
		Swt[idx].first=temp;
	}
	for(int idx=0;idx<N;idx++)
	{
		int temp;
		cin>>temp;
		Swt[idx].second=temp;
	}
	for(int idx=0;idx<M;idx++)
	{
		int temp;
		cin>>temp;
		Box[idx].first=temp;
	}
	for(int idx=0;idx<M;idx++)
	{
		int temp;
		cin>>temp;
		Box[idx].second=temp;
	}
	sort(Swt.begin(), Swt.end(), greater<>());
	sort(Box.begin(), Box.end(), greater<>());
	multiset<int>mp;
	for(int idx=0,ind=0;idx<N;idx++)
	{
		while(ind<M && Box[ind].first>=Swt[idx].first)
		{
			mp.insert(Box[ind].second);
			ind++;
		}
		auto it=mp.lower_bound(Swt[idx].second);
		if(it==mp.end()) 
		{
			cout<<"No"<<endl;
			return 0;
		}
		mp.erase(it);
	}
	cout<<"Yes"<<endl;
	return 0;
}