#include <iostream>
using namespace std;
class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;
        for (int i = s.size() - 1; i >0; i--) {
            int bit = (s[i] - '0') + carry;

            if (bit % 2 == 0) {
                steps += 1;
            } else {
                steps += 2;
                carry = 1;
            }
            cout<<s[i]<<" "<<bit<<" "<<steps<<" "<<carry<<endl;
        }

        return steps + carry;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.numSteps(s);
}
