#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int N;
    cin >> N;

    vector<tuple<int, int, int>> rd(N);
    ll remwt = 0LL, pullpow = 0LL;

    for (int i = 0; i < N; i++) {
        int w, s;
        cin >> w >> s;

        rd[i] = make_tuple(w + s, s, w);
        remwt += w;
    }

    sort(rd.begin(), rd.end(), greater<>());

    int ans = N;

    for (int i = 0; i < N && pullpow < remwt; i++) {
        ans--;
        remwt -= get<2>(rd[i]);  
        pullpow += get<1>(rd[i]);
    }

    cout << ans << endl;
}
