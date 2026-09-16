#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    long long totalSum=(N*(N+1))/2;
    long long actualSum=0,num;
    for (long long i=0;i<N-1;i++)
    {
        cin>>num;
        actualSum+=num;
    }
    cout<<totalSum-actualSum;
    return 0;
}