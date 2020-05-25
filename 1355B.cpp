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
        vector<int> explorers(n);
        for (int i = 0; i < n; i++) {
            cin >> explorers[i];
        }
        sort(explorers.begin(), explorers.end());

        int ans = 0;
        int streak = 1;
        for (int i = 0; i < n; i++) {
            if (explorers[i] == streak) {
                ans++;
                streak = 1;
            } else {
                streak++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}