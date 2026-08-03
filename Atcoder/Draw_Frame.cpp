#include<bits/stdc++.h>
using namespace std;
int main()
{
	int R,C;
	cin>>R>>C;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(i==0 ||i==R-1 || j==0 || j==C-1)
			{
				cout<<"#";
			}
			else
			{
				cout<<".";
			}
		}
		cout<<endl;
	}
}