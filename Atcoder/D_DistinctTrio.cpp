#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>Arr(N);
	unordered_map<int,int>mp;
	for(int i=0;i<N;i++)
	{
		cin>>Arr[i];
		mp[Arr[i]]++;
	}
	sort(Arr.begin(),Arr.end());
	long long Ans=0,temp=N-1;
	int Lower=0;
	for(int i=0;i<N;i++)
	{
		Ans+=(i-Lower)*(temp-mp[Arr[i]]+1);
		mp[Arr[i]]--;
		Lower++;
		if(mp[Arr[i]]==0)	Lower=0;
		temp--;
	}
	cout<<Ans;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<int>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	long long Ans=0;
	for(int i=0;i<N;i++)
	{
		auto grtr=upper_bound(A.begin(),A.end(),A[i]);
		auto Lower=A.end()-grtr;
		auto smlr=lower_bound(A.begin(),A.end(),A[i]);
		auto Upper=smlr-A.begin();
		Ans+=(Lower*Upper);
	}
	cout<<Ans;
}*/
