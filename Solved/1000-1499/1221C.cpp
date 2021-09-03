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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int c, m, x;
        cin >> c >> m >> x;
        int ans = min(c, min(m, x));
        c -= ans;
        m -= ans;
        x -= ans;
        vector<int> specialized = {c, m};
        sort(specialized.begin(), specialized.end());
        int diff = specialized[1] - specialized[0];
        int delta = min(diff, specialized[0]);
        ans += delta;
        specialized[0] -= delta;
        specialized[1] -= delta*2;
        delta = specialized[0] / 3;
        ans += 2*delta;
        specialized[0] -= delta*3;
        specialized[1] -= delta*3;
        ans += specialized[0] >= 2;
        cout << ans << endl;
    }
    return 0;
}