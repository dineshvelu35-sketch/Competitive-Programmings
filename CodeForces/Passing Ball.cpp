#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		string Dir;
		for(int i=0;i<N;i++)
		{
			cin>>Dir[i];
		}
		int i=0,StuCnt=0;
		
		while(Dir[i]!='L')
		{
			i++;
			StuCnt++;
		}
		cout<<StuCnt+1<<endl;
	}
}