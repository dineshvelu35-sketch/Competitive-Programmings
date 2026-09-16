#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Q;
	cin>>Q;
	while(Q--)
	{
		int A,B,C;
		cin>>A>>B>>C;
		int Cnt=0;
		while(A!=B && B!=C && A!=C)
		{
			if(A>B && A>C)
			{
				A=A-1; 
			}
			else if(A<B && B>C)
			{
				B=B-1;
			}
			else
			{
				C=C-1;
			}
			if(A<B && A<C)
			{
				A=A+1; 
			}
			else if(A>B && B<C)
			{
				B=B+1;
			}
			else
			{
				C=C+1;
			}
			Cnt++;
		}
		cout<<Cnt<<endl;
	}
}