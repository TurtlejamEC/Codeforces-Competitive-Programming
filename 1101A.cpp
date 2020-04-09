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
#include <climits>
#include <iomanip>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) {
        ull l, r, d;
        cin >> l >> r >> d;
        ull ans;
        if (d < l) {
            ans = d;
        } else {
            ull rem = r % d;
            ans = r + d - rem;
        }

        cout << ans << endl;
    }
    return 0;
}