#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<long>Neg,Pos;
	for(int i=0;i<N;i++)
	{
		int x;
		cin>>x;
		if(x<0)
		{
			Neg.push_back(x);
		}
		else
		{
			Pos.push_back(x);
		}
	}
	sort(Pos.begin(),Pos.end());
	sort(Neg.begin(),Neg.end(),greater<long>());
	int i=0,j=0;
	long Cr=0,Ans=0;
	while(i<Pos.size() || j<Neg.size())
	{
		if(i==Pos.size())
		{
			while(j<Neg.size())
			{
				Ans+=abs(Cr-Neg[j]);
				Cr=Neg[j];
				j++;
			}
		}
		else if(j==Neg.size())
		{
			while(i<Pos.size())
			{
				Ans+=abs(Cr-Pos[i]);
				Cr=Pos[i];
				i++;
			}
		}
		else
		{
			long DisNeg=abs(Cr-Neg[j]);
			long DisPos=abs(Cr-Pos[i]);
			if(DisNeg<=DisPos)
			{
				Ans+=DisNeg;
				Cr=Neg[j];
				j++;
			}
			else
			{
				Ans+=DisPos;
				Cr=Pos[i];
				i++;
			}
		}
	}
	cout<<Ans;
}