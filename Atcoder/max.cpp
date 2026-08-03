#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int N;
  cin>>N;
  vector<int>S(N);
  for(int i=0;i<N;i++)
  {
    cin>>S[i];
  }
  int count=0, j=0,Max=0;
  for(int i=1;i<N;i++)
  {
    if(S[j]+1==S[i])
    {
      count++;
    }
    if(i==N)
    {
      j++;
      i=j;
    }
    Max=max(Max,count);
  }
  cout<<Max;
}
