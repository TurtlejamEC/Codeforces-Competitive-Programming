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
        vector< pair<ll, ll> > monsters(n);
        for (int i = 0; i < n; i++) {
            ll a, b;
            cin >> a >> b;
            monsters[i] = {a, b};
        }
        ll current = monsters[0].first;
        for (int i = 1; i < n; i++) {
            current += max(0LL, monsters[i].first - monsters[i-1].second);
        }
        ll ans = current;
        for (int i = 1; i < n; i++) {
            current -= monsters[i-1].first;
            current += max(0LL, monsters[i-1].first - monsters[(i == 1 ? n-1 : i-2)].second);
            current -= max(0LL, monsters[i].first - monsters[i-1].second);
            current += monsters[i].first;
            ans = min(ans, current);
        }
        cout << ans << '\n';
    }
    return 0;
}