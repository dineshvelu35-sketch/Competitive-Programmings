#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q;
	cin>>N>>Q;
	vector<int>A(N+1,0);
	int XOR=0;
	set<int>active;
	while(Q--)
	{
		int temp;
		cin>>temp;
		int oldValue;
		int newValue;
		if(temp==1)
		{
			int t1;
			cin>>t1;
			oldValue=A[t1];
			newValue=++A[t1];
			XOR^=oldValue;
			XOR^=newValue;
			active.insert(t1);
			
		}
		else if(temp==2)
		{
            for(auto it=active.begin();it!=active.end();)
            {
                int i=*it;
                XOR^=A[i];
                A[i]--;
                XOR^=A[i];
                if(A[i]==0)
                {
                    it=active.erase(it);
                }
                else
                {
                    it++;
                }
            }
		}
		cout<<XOR<<endl;
		
	}
}