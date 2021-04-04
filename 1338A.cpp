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
        int n;
        cin >> n;
        int ans = 0;
        ll hi = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            if (a >= hi) {
                hi = a;
            } else {
                ll diff = hi - a;
                ll multiplier = 2;
                int tmpAns = 1;
                while (diff >= multiplier) {
                    multiplier *= 2;
                    tmpAns++;
                }
                ans = max(ans, tmpAns);
            }
        }
        cout << ans << endl;
    }
    return 0;
}