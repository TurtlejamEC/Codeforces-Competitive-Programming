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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll ans = 0;
        int a;
        cin >> a;
        bool pos = a > 0;
        int compare = a;
        n--;
        while (n--) {
            cin >> a;
            if (pos && a > 0 || !pos && a < 0) {
                compare = max(compare, a);
            } else {
                ans += compare;
                compare = a;
                pos = a > 0;
            }
        }

        ans += compare;
        cout << ans << endl;
    }
    return 0;
}