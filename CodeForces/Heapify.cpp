#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int>A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(int i=1;i<=N;i+=2)
        {
            vector<int>seq;
            for(int j=i;j<=N;j=j*2)
            {
                seq.push_back(A[j]);
            }
            sort(seq.begin(),seq.end());
            int flag=1;
            for(int j=i,idx=0;j<=N;j=j*2,idx++)
            {
                if(A[j]!=j)
                {
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
        }
    }
}