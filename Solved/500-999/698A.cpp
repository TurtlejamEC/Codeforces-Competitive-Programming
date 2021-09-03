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
    int n;
    cin >> n;
    vector< vector<int> > dp(n, vector<int>(3, -1)); // dp[i][0] = rest, dp[i][1] = sport, dp[i][2] = contest
    int a;
    cin >> a;

    dp[0][0] = 1;
    if (a == 0) {
        dp[0][1] = -1;
        dp[0][2] = -1;
    } else {
        dp[0][1] = (a&1 ? 0 : -1);
        dp[0][2] = (a&2 ? 0 : -1);
    }

    for (int i = 1; i < n; i++) {
        cin >> a;

        dp[i][0] = min(dp[i-1][0], min((dp[i-1][1] == -1 ? INT_MAX : dp[i-1][1]), (dp[i-1][2] == -1 ? INT_MAX : dp[i-1][2])))+1;
        if (a != 0) {
            if (a&1) {
                dp[i][1] = min(dp[i-1][0], (dp[i-1][2] == -1 ? INT_MAX : dp[i-1][2]));
            }

            if (a&2) {
                dp[i][2] = min(dp[i-1][0], (dp[i-1][1] == -1 ? INT_MAX : dp[i-1][1]));
            }
        }
    }

    int ans = min(dp[n-1][0], min(dp[n-1][1] == -1 ? INT_MAX : dp[n-1][1], dp[n-1][2] == -1 ? INT_MAX : dp[n-1][2]));
    cout << ans << endl;
    return 0;
}