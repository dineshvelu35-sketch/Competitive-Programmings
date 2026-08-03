#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        multiset<pair<int,pair<int,int>>> ms;
        ms.insert({grid[0][0], {0,0}});

        vector<vector<int>> dis(n, vector<int>(n, 1e9));
        dis[0][0] = grid[0][0];

        vector<pair<int,int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};

        while(!ms.empty()) {
            auto x = *ms.begin();
            ms.erase(ms.begin());

            int reach = x.first;
            int i = x.second.first;
            int j = x.second.second;

            if(reach > dis[i][j]) continue;

            for(auto d : dir) {
                int ni = i + d.first;
                int nj = j + d.second;

                if(ni>=0 && ni<n && nj>=0 && nj<n) {
                    int val = max(dis[i][j], grid[ni][nj]);

                    if(val < dis[ni][nj]) {
                        dis[ni][nj] = val;
                        ms.insert({val, {ni,nj}});
                    }
                }
            }
        }

        return dis[n-1][n-1];
    }
};
int main() {
    string s, temp;
    while(getline(cin, temp)) {
        s += temp;
    }

    vector<vector<int>> grid;
    vector<int> row;
    int num = 0;
    bool buildingNumber = false;

    for(char c : s) {
        if(isdigit(c)) {
            num = num * 10 + (c - '0');
            buildingNumber = true;
        } 
        else {
            if(buildingNumber) {
                row.push_back(num);
                num = 0;
                buildingNumber = false;
            }
            if(c == ']') {
                if(!row.empty()) {
                    grid.push_back(row);
                    row.clear();
                }
            }
        }
    }

    Solution obj;
    cout << obj.swimInWater(grid) << endl;
}