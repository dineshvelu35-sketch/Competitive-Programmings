// Problem: E - Packing Potatoes
// Contest: AtCoder - AtCoder Beginner Contest 258
// URL: https://atcoder.jp/contests/abc258/tasks/abc258_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,Q;
    long long X;
    cin>>N>>Q>>X;
    vector<long long>Psum(N);
    long long totwt=0;
    for(int i=0;i<N;i++)
    {
        long long x;
        cin>>x;
        totwt+=x;
        Psum[i]=x+(i?Psum[i-1]:0);
    }
    long long Round=X/totwt;
    X%=totwt;
    if(X==0)
    {
        X=totwt;
        Round--;
    }
    vector<int>pos(N,-1);
    vector<long long>CntArr;
    int cur=0;
    while(pos[cur]==-1)
    {
        pos[cur]=CntArr.size();
        long long base=cur?Psum[cur-1]:0;
        long long target=base+X;
        long long p=lower_bound(Psum.begin(),Psum.end(),target)-Psum.begin();
        if(p<N)
        {
            CntArr.push_back(Round*N+p-cur+1);
            cur=(p+1)%N;
        }
        else
        {
            long long need=target-Psum[N-1];
            p=lower_bound(Psum.begin(),Psum.end(),need)-Psum.begin();
            CntArr.push_back(Round*N+N-cur+p+1);
            cur=(p+1)%N;
        }
    }
    int cycleStart=pos[cur];
    int cycleLen=CntArr.size()-cycleStart;
    while(Q--)
    {
        long long k;
        cin>>k;
        k--;
        if(k<CntArr.size())
        {
            cout<<CntArr[k]<<endl;
        }
        else
        {
            cout<<CntArr[cycleStart+(k-cycleStart)%cycleLen]<<endl;
        }
    }
}