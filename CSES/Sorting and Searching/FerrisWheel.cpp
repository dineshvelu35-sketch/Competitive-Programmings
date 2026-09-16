#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,X;
	cin>>N>>X;
	int Cnt=0;
	vector<int>Weight(N);
	for(int i=0;i<N;i++)
	{
		cin>>Weight[i];
	}
	sort(Weight.begin(),Weight.end());
	int i=0,j=Weight.size()-1;
	while(i<=j)
	{
		if(Weight[i]+Weight[j]<=X)
		{
			
			i++;
			j--;
		}
		else if(Weight[i]+Weight[j]>X)
		{
			j--;
		}
		Cnt++;
	}
	cout<<Cnt;
	
}