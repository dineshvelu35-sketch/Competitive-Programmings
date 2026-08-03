#include<iostream>
#include<vector>
using namespace std;
int main(){
  int N,M;
  cin>>N>>M;
  vector<int>Cov(M+1,0);
  for(int i=0;i<N;i++)
  {
    int A;
    cin>>A;
    vector<int>Bev(A);
    for(int j=0;j<A;j++)
    {
       cin>>Bev[j]; 
    }
    int flag=0,j;
    for(j=0;j<A;j++)
    {
      if(Cov[Bev[j]]==0)
      {
        flag=1;
        cout<<Bev[j]<<endl;
        Cov[Bev[j]]++;
        break;
      }
    }
	  if(flag==0)
    {
    	cout<<"0"<<endl;
		}
  }
}

