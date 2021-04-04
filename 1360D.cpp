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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k >= n) {
            cout << 1 << endl;
            continue;
        }

        int limit = sqrt(n)+1;
        int ans = 0;
        bool found = false;
        for (int i = 1; i < limit && i <= k; i++) {
            if (n % i == 0) {
                if (n/i <= k) {
                    ans = i;
                    found = true;
                    break;
                } else {
                    ans = n/i;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}