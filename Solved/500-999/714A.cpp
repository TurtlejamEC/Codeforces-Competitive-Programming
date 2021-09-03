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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    ll l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if (r2 < l1 || r1 < l2) {
        cout << 0;
    } else {
        ll l = max(l1, l2);
        ll r = min(r1, r2);
        ll ans = r-l+1;
        if (l <= k && k <= r) {
            ans--;
        }
        cout << ans;
    }
    return 0;
}