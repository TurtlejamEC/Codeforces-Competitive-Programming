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

    int n;
    cin >> n;
    vector<int> nums(n);
    vector< vector<ll> > dp(n, vector<ll>(n, -1)); // dp[p][i] = max hp possible if you drink i potions from potions 1 to p
    ll hp = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];

        if (hp >= 0) {
            hp += nums[i];
        }
        dp[i][i] = (hp < 0 ? -1 : hp);
    }
    
    for (int p = 0; p < n; p++) {
        dp[0][p] = nums[p] >= 0 ? nums[p] : -1;

        if (p > 0) {
            dp[0][p] = max(dp[0][p], dp[0][p-1]);
        }
    }

    for (int i = 1; i < n; i++) {
        for (int p = i + 1; p < n; p++) {
            dp[i][p] = max(dp[i][p], dp[i][p-1]);    

            if (i > 0 && dp[i-1][p-1] >= 0 && dp[i-1][p-1] + nums[p] >= 0) {
               dp[i][p] = max(dp[i-1][p-1] + nums[p], dp[i][p]);
            }
        }
    }
    
    for (int i = n-1; i >= 0; i--) {
        if (dp[i][n-1] >= 0) {
            cout << i+1 << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';

    return 0;
}
        