#include <bits/stdc++.h>
using namespace std;
void solve(int n,int k)
{
	if (k > n) {
            cout << -1 << '\n';
        }

        long long lon = n, hi = n;
        int time = 0;
        bool ok = false;

        while (lon <= hi) {
            if (lon <= k && k <= hi) {
                cout << time << '\n';
                ok = true;
                break;
            }
            if (hi == 0) break;

            lon = lon / 2;
            hi = (hi + 1) / 2;
            time++;
        }

        if (!ok) cout << -1 << '\n';
    }
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        solve(n,k);
    }
    return 0;
}

