#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,D;
		cin>>N>>D;
		vector<int>A(N);
		vector<int>B(N);
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(int i=0;i<N;i++)
		{
			cin>>B[i];
		}
		vector<int>rem(N,0);
		int count=D,j=0;
		for(int i=0;i<N;i++)
		{
			rem[i]+=A[i];
			rem[j]-=B[i];
			if(rem[j]==0)
			{
				j++;
			}
			else if(rem[j]<0)
			{
				rem[j+1]+=rem[j];
				rem[j]=0;
			}
			if(!count--)
			{
				count=D;
				rem[j]=0;
			}
		}
		
		int sum=0;
		for(int i=0;i<N;i++)
		{
			sum+=rem[i];
		}
		cout<<sum<<endl;
		cout<<endl;
		
	}
}
