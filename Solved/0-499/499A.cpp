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
    int n, x;
    cin >> n >> x;
    vector< pair<int, int> > best(n);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        best[i] = {l, r};
    }

    int ans = 0;
    int cur = 1;
    for (int i = 0; i < best.size(); i++) {
        ans += (best[i].first - cur) % x;
        ans += best[i].second - best[i].first + 1;
        cur = best[i].second+1;
    }
    cout << ans;
    return 0;
}