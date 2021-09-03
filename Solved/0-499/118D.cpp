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

    int mod = 1e8;
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    vector< vector< vector<int> > > dp(n1+1, vector< vector<int> >(n2+1, vector<int>(k1+k2))); // dp[i][j][k] = ways if i footmen used, j horsemen used, [0,k1)+1 footmen in row [k1,k1+k2)
    dp[1][0][0] = 1;
    dp[0][1][k1] = 1;
    for (int i = 1; i < n1 + n2; i++) {
        for (int f = min(i, n1); f >= 0; f--) {
            int h = i-f;
            if (h > n2) continue;
            if (f < n1) {
                if (f > 0) {
                    for (int k = 0; k < k1-1; k++) {
                        dp[f+1][h][k+1] = (dp[f+1][h][k+1] + dp[f][h][k]) % mod;
                    }
                }

                if (h > 0) {
                    for (int k = 0; k < k2; k++) {
                        dp[f+1][h][0] = (dp[f+1][h][0] + dp[f][h][k1+k]) % mod;
                    }
                }
            }
            if (h < n2) {
                if (h > 0) {
                    for (int k = 0; k < k2-1; k++) {
                        dp[f][h+1][k1+k+1] = (dp[f][h+1][k1+k+1] + dp[f][h][k1+k]) % mod;
                    }
                }

                if (f > 0) {
                    for (int k = 0; k < k1; k++) {
                        dp[f][h+1][k1] = (dp[f][h+1][k1] + dp[f][h][k]) % mod;
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int k = 0; k < k1+k2; k++) {
        ans = (ans + dp[n1][n2][k]) % mod;
    }
    cout << ans << endl;
    return 0;
}