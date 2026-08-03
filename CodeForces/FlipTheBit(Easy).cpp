#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--) 
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n+2,0);
        for(int i=1;i<=n;i++)
        {
        	 cin>>a[i];
        }
        int p;
        cin>>p;
        int x=a[p];
        auto b=[&](int i)->int 
        { 
            if(i<1 || i>n) 
            {
            	return 0;
            }
            return (a[i]!=x)?1:0;
        };
        
        int L=0,R=0;
        for(int i=1;i<=p;i++)
        {
            if((b(i)^b(i-1))==1)
            {
            	L++;
            }
        }
        for(int i=p+1;i<=n+1;i++)
        {	
            if((b(i)^b(i-1))==1)
            { 
            	R++;
            }
        }
        int ans=max(L,R);
        if(ans%2==1)
        {
        	ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}