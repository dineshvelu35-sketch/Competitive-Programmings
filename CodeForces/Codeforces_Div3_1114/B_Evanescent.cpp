#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int Q;
    cin>>Q;
    while(Q--) 
    {
        int N;
        cin>>N;
        string S;
        cin>>S;
        int runs=1;
        for(int i=1;i<N;i++) 
        {
            if(S[i]!=S[i-1])
                runs++;
        }
        int ans=INT_MAX;
        for (int i=1;i<=N-2;i++) 
        {
            int cur=runs;
            if(S[i-1]!=S[i])
            {
                cur--;
            }
            if(S[i]!=S[i+1])
            {
                cur--;
            }
            if(S[i-1]!=S[i+1])
            {
            	cur++;
            }
            ans=min(ans,cur);
        }

        cout<<ans<<"\n";
    }

    return 0;
}