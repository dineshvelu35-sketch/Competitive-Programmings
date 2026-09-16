#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q;
	cin>>N>>Q;
	vector<int>Arr(N+1,0),posv,Newposv;
	int XOR=0;
	while(Q--)
	{
		int temp;
		cin>>temp;
		int Oldvalue;
		int Newvalue;
		if(temp==1)
		{
			cin>>temp;
			Oldvalue=Arr[temp];
			Newvalue=(++Arr[temp]);
			XOR^=Oldvalue;
			XOR^=Newvalue;
			if(Arr[temp]==1)
			{
				posv.push_back(temp);
			}
		}	
		else
		{
			for(auto pos:posv)
			{
				XOR^=Arr[pos];
				Arr[pos]--;
				if(Arr[pos]>0)
				{
					XOR^=Arr[pos];
					Newposv.push_back(pos);
				}
			}
			posv=Newposv;
			Newposv.clear();
		}
		cout<<XOR<<endl;
	}
}