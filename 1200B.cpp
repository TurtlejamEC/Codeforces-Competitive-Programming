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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> columns(n);
        for (int i = 0; i < n; i++) {
            cin >> columns[i];
        }

        bool possible = true;
        for (int i = 0; i < n-1; i++) {
            if (columns[i] > max(columns[i+1] - k, 0)) {
                m += columns[i] - max(columns[i+1] - k, 0);
            } else {
                m -= max(columns[i+1] - k, 0) - columns[i];
                if (m < 0) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}