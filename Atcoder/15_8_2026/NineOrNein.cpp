#include<bits/stdc++.h>
using namespace std;
int main()
{
	double A,B;
	cin>>A>>B;
	if(A+B==9 || A-B==9 || A*B==9 || A/B==9)
	{
		cout<<"Nine";
	}
	else
	{
		cout<<"Nein";
	}
}