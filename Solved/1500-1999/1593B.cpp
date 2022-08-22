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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector< vector<int> > pos(10);
        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - '0'].push_back(i);
        }
        int ans = 19;

        //25 or 75
        if (pos[5].size()) {
            int other = -1;
            for (int i = pos[5].back() - 1; i >=0; i--) {
                if (s[i] == '2' || s[i] == '7') {
                    other = i;
                    break;
                }
            }

            ans = min(ans, (pos[5].back() - other - 1) + ((int)s.size() - 1 - pos[5].back()));
        }

        // 00 or 50
        if (pos[0].size()) {
            int other = -1;
            for (int i = pos[0].back() - 1; i >=0; i--) {
                if (s[i] == '0' || s[i] == '5') {
                    other = i;
                    break;
                }
            }

            ans = min(ans, (pos[0].back() - other - 1) + ((int)s.size() - 1 - pos[0].back()));
        }

        cout << ans << '\n';
    }
    return 0;
}