#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  for(int i=1;i<=N;i++)
  {
    if(i%3==0)
    {
      cout<<"Fizz"<<endl;
    }
    else
    {
      cout<<i<<endl;
    }
  }
}