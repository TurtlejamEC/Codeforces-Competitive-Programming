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
        ll k, n, a, b;
        cin >> k >> n >> a >> b;
        ll hi = n;
        ll lo = 0;
        while (hi > lo) {
            int mid = (hi + lo + 1) / 2;
            if (k - mid * a - (n - mid) * b > 0) {
                lo = mid;
            } else {
                hi = mid - 1;
            }
        }

        if (k - lo * a - (n - lo) * b > 0) {
            cout << lo << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}