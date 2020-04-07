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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }
        int lo = prices[n-1];
        int ans = 0;
        for (int i = n-2; i >= 0; i--) {
            if (prices[i] > lo) {
                ans++;
            } else {
                lo = prices[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}