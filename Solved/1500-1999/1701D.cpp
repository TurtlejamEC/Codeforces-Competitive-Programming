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
        int n;
        cin >> n;
        vector<int> b(n);
        vector< vector< pair<int, int> > > rightPos(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] == 0) {
                rightPos[i + 1 + 1].push_back({n, i});
            } else {
                int left = (i + 1) / (b[i] + 1) + 1;
                int right = (i + 1) / b[i];
                rightPos[left].push_back({right, i});
            }
        }

        vector<int> ans(n);
        set< pair<int, int> > considering;
        for (int i = 1; i <= n; i++) {
            for (pair<int, int> segment: rightPos[i]) {
                considering.insert(segment);
            }

            int pos = (*considering.begin()).second;
            considering.erase(considering.begin());
            ans[pos] = i;
        }

        for (int i: ans) {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}