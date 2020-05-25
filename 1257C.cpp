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
        vector<int> lastSeen(n+1, -1);
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (lastSeen[a] != -1) {
                if (i - lastSeen[a] + 1 < ans || ans == -1) {
                    ans = i - lastSeen[a] + 1;
                }
            }

            lastSeen[a] = i;
        }

        if (ans == -1) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}