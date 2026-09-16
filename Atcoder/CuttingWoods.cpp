#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q;
	cin>>N>>Q;
	set<int>mark;
	mark.insert(0);
	mark.insert(N);
	while(Q--)
	{
		int C,X;
		cin>>C>>X;
		if(C==1)
		{
			mark.insert(X);
		}
		else
		{
			auto R=mark.lower_bound(X);
			auto it=prev(R);
			cout<<*R-*it<<endl;
		}
	}
	return 0;
}