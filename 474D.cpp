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

#define MOD 1000000007

int main() {
    int t, k;
    cin >> t >> k;
    vector< vector<int> > ways(2, vector<int>(1e5+1));
    ways[0][0] = 1;
    for (int i = 1; i < 1e5+1; i++) {
        ways[0][i] = (ways[0][i-1] + ways[1][i-1]) % MOD;
        if (i - k >= 0) {
            ways[1][i] = (ways[0][i-k] + ways[1][i-k]) % MOD;
        }
    }
    vector<int> ans(1e5+1);
    for (int i = 1; i < 1e5+1; i++) {
        ans[i] = (ways[0][i] + ways[1][i])%MOD;
        ans[i] = (ans[i] + ans[i-1])%MOD;
    }
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << ((ans[b] - ans[a-1]) % MOD + MOD) % MOD << endl;
    }
    return 0;
}