#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N;
	cin>>N;
	long long A;
	set<long long>St;
	for(long long i=0;i<N;i++)
	{
		cin>>A;
		St.insert(A);
	}
	cout<<St.size();
	return 0;
}

