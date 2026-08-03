#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    long long Y;
    cin >> N >> M >> Y;

    int total = N + 2; // cities: 1..N, N+1, N+2
    vector<vector<pair<int,long long>>> g(total + 1); // 1-indexed up to N+2

    for(int road = 1; road <= M; road++){
        int src, dest;
        long long time;
        cin >> src >> dest >> time;
        g[src].push_back({dest, time});
        g[dest].push_back({src, time});
    }

    // edge between virtual node N+1 and N+2 with weight Y
    g[N+1].push_back({N+2, Y});

    for(int city = 1; city <= N; city++){
        long long weight;
        cin >> weight;
        g[city].push_back({N+1, weight});
        g[N+2].push_back({city, weight});
    }

    vector<long long> tarr(total + 1, LLONG_MAX);
    // min-heap of (time, city)
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;

    tarr[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()){
        auto [currtime, currcity] = pq.top();
        pq.pop();

        if(currtime > tarr[currcity]) continue;

        for(auto &adj : g[currcity]){
            int nextcity = adj.first;
            long long traveltime = adj.second;
            long long newtime = currtime + traveltime;
            if(newtime < tarr[nextcity]){
                tarr[nextcity] = newtime;
                pq.push({newtime, nextcity});
            }
        }
    }

    for(int city = 2; city <= N; city++){
        cout << tarr[city] << " ";
    }
    cout << "\n";

    return 0;
}