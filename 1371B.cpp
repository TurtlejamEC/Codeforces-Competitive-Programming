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
        ull n, r;
        cin >> n >> r;
        ull nToSum = min(n - 1, r);
        ull ans = nToSum * (nToSum + 1) / 2;
        if (r >= n) {
            ans += 1;
        }

        cout << ans << endl;
    }
    return 0;
}