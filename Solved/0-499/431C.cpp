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

#define mod 1000000007

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int n, k, d;
    cin >> n >> k >> d;
    vector< vector<int> > dp(2, vector<int>(n+1));
    for (int i = 1; i < min(d, n); i++) {
        dp[0][i] = 1;
    }
    for (int i = d; i <= min(k, n); i++) {
        dp[1][i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < d; j++) {
            if (i+j > n) break;

            dp[0][i+j] = (dp[0][i+j] + dp[0][i]) % mod;
            dp[1][i+j] = (dp[1][i+j] + dp[1][i]) % mod;
        }

        for (int j = d; j <= k; j++) {
            if (i+j > n) break;

            dp[1][i+j] = (dp[1][i+j] + dp[0][i]) % mod;
            dp[1][i+j] = (dp[1][i+j] + dp[1][i]) % mod;
        }
    }
    cout << dp[1][n] << endl;
    return 0;
}