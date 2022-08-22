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
        vector<int> p(n);
        set<int> used;
        int d = 2;

        p[0] = 1;
        int mex = 2;
        for (int i = 1; i < n; i++) {
            if (p[i-1] * d <= n) {
                p[i] = p[i-1] * d;
            } else {
                while (used.find(mex) != used.end()) {
                    mex++;
                }
                p[i] = mex;
            }

            used.insert(p[i]);
        }

        cout << d << '\n';
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}