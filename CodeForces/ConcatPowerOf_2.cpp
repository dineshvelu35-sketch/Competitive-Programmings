#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>>N;
    const long long LIMIT=1e9;
    vector<string> powers;
    long long p=1;
    while(p<=LIMIT) 
    {
        powers.push_back(to_string(p));
        p*=2;
    }
    set<long long> good;
    queue<string> q;
    for(auto& pw:powers) 
    {
        long long val=stoll(pw);
        if(val<=LIMIT) 
        {
            good.insert(val);
            q.push(pw);
        }
    }
    while(!q.empty()) 
    {
        string curr=q.front();
        q.pop();
        for(auto& pw:powers) 
        {
            string nxt=curr+pw;
            if (nxt.size()>10) continue;
            long long val=stoll(nxt);
            if(val<=LIMIT) 
            {
                if(good.find(val)==good.end()) 
                {
                    good.insert(val);
                    q.push(nxt);
                }
            }
        }
    }
    
    vector<long long> result(good.begin(),good.end());
    sort(result.begin(),result.end());
    cout<<result[N-1]<<endl;
    return 0;
}