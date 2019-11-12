#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    // product up to n
    // dp[n][0] = min if product is 1, dp[n][1] = min if product is -1
    vector<vector<unsigned long long> > dp(n, vector<unsigned long long>(2));

    int a;
    cin >> a;
    dp[0][0] = abs(a - 1);
    dp[0][1] = abs(a + 1);

    for (int i = 1; i < n; i++) {
        cin >> a;
        // make a_i 1 or -1?
        dp[i][0] = min(dp[i-1][0] + abs(a-1), dp[i-1][1] + abs(a+1));
        dp[i][1] = min(dp[i-1][0] + abs(a+1), dp[i-1][1] + abs(a-1));
    }

    cout << dp[n-1][0] << endl;

    return 0;
}