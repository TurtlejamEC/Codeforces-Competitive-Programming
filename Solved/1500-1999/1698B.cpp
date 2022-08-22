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
        int n, k;
        cin >> n >> k;
        vector<int> piles(n);
        for (int i = 0; i < n; i++) {
            cin >> piles[i];
        }

        if (k == 1) {
            cout << (n - 2 + 1) / 2 << '\n';
            continue;
        }

        int ans = 0;
        for (int i = 1; i < n - 1; i++) {
            if (piles[i] > piles[i-1] + piles[i+1]) {
                ans++;
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}