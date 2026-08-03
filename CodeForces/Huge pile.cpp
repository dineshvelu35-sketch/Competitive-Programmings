#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k > n) {
            cout << -1 << '\n';
            continue;
        }

        long long lo = n, hi = n;
        int time = 0;
        bool ok = false;

        while (lo <= hi) {
            if (lo <= k && k <= hi) {
                cout << time << '\n';
                ok = true;
                break;
            }
            if (hi == 0) break;

            lo = lo / 2;
            hi = (hi + 1) / 2;
            time++;
        }

        if (!ok) cout << -1 << '\n';
    }
    return 0;
}

