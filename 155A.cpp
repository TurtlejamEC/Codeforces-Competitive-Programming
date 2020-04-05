#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int lo, hi;
    cin >> lo;
    hi = lo;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        if (a < lo) {
            ans++;
            lo = a;
        } else if (a > hi) {
            ans++;
            hi = a;
        }
    }
    cout << ans;
    return 0;
}