#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		vector<int>arr(N);
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		int flag=1;
		for(int i=1;i<N;i++)
		{
			if(arr[i]<arr[i-1])
			{
				cout<<"1"<<endl;
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<N<<endl;
		}
	}
	return 0;
}