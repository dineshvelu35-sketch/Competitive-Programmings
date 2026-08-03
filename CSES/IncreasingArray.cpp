#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N;
	cin>>N;
	long long arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	long long count=0;
	for(int i=1;i<N;i++)
	{
		while(arr[i]<arr[i-1])
		{
			arr[i]++;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;;
}
