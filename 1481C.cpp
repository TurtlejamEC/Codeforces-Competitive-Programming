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
        int n, m;
        cin >> n >> m;
        vector<int> fence(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> fence[i];
        }

        int need = 0;
        vector<int> desired(n+1);
        set<int> desiredSet;
        vector< queue<int> > apply(n+1);
        vector<int> lastColorPos(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> desired[i];
            desiredSet.insert(desired[i]);
            lastColorPos[desired[i]] = i;
            if (desired[i] != fence[i]) {
                apply[desired[i]].push(i);
                need++;
            }
        }

        vector<int> painters(m);
        for (int i = 0; i < m; i++) {
            cin >> painters[i];
        }

        bool possible = true;
        vector<int> ans(m);
        if (desiredSet.find(painters.back()) == desiredSet.end()) {
            possible = false;
        } else {
            for (int i = 0; i < m; i++) {
                if (!apply[painters[i]].empty()) {
                    ans[i] = apply[painters[i]].front();
                    apply[painters[i]].pop();
                    need--;
                } else {
                    ans[i] = (i == m-1 ? lastColorPos[painters[m-1]] : 0);
                }
                fence[ans[i]] = painters[i];
            }

            for (int i = 0; i < ans.size(); i++) {
                if (!ans[i]) {
                    ans[i] = ans[m-1];
                }
            }

            for (int i = 1; i <= n; i++) {
                if (fence[i] != desired[i]) {
                    possible = false;
                    break;
                }
            }
            possible &= need == 0;
        }

        cout << (possible ? "YES" : "NO") << endl;
        if (possible) {
            for (int i: ans) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}