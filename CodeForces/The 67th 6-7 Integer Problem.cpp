#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<int> V(7);
        int total_sum = 0;
        for (int i = 0; i < 7; i++) {
            cin >> V[i];
            total_sum += V[i];
        }
        int max_val = *max_element(V.begin(), V.end());
        cout << (2 * max_val - total_sum) << "\n";
    }
    return 0;
}