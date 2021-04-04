#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
#include <bitset>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x;
        cin >> x;
        string ans(s.size(), '1');
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') continue;

            if (i - x >= 0) {
                ans[i - x] = '0';
            }

            if (i + x < s.size()) {
                ans[i + x] = '0';
            }
        }

        bool possible = true;
        for (int i = 0; i < ans.size(); i++) {
            if (s[i] == '0') continue;

            bool has1 = false;
            has1 |= i - x >= 0 && ans[i-x] == '1';
            has1 |= i + x < s.size() && ans[i+x] == '1';

            if (!has1) {
                possible = false;
                break;
            }
        }

        cout << (possible ? ans : "-1") << '\n';
    }
    return 0;
}