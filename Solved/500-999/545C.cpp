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
    vector<int> pos(n), height(n);
    for (int i = 0; i < n; i++) {
        cin >> pos[i] >> height[i];
    }

    vector< vector<int> > ans(n, vector<int>(3)); // ans[i][j] = max number of trees fallen up to ith tree with choice 0 = fell left, 1 = still standing, 2 = fell right
    ans[0][0] = 1;
    ans[0][2] = pos[0] + height[0] < pos[1] ? 1 : -1;

    for (int i = 1; i < n; i++) {
        ans[i][0] = -1;
        // previous fell left
        if (ans[i-1][0] != -1) {
            ans[i][0] = max(ans[i][0], (pos[i] - height[i] > pos[i-1]) ? ans[i-1][0] + 1 : -1);
        }
        ans[i][0] = max(ans[i][0], (pos[i] - height[i] > pos[i-1]) ? ans[i-1][1] + 1 : -1);
        if (ans[i-1][2] != -1) {
            ans[i][0] = max(ans[i][0], (pos[i] - height[i] > pos[i-1] + height[i-1]) ? max(ans[i][0], ans[i-1][2] + 1) : -1);
        }

        // Keep standing
        for (int j = 0; j < 3; j++) {
            ans[i][1] = max(ans[i][1], ans[i-1][j]);
            if (i < n-1) {
                ans[i][2] = (pos[i] + height[i] < pos[i+1]) ? max(ans[i][2], (ans[i-1][j] != -1) ? ans[i-1][j] + 1 : -1) : -1;
            } else {
                ans[i][2] = max(ans[i][2], (ans[i-1][j] != -1) ? ans[i-1][j] + 1 : -1);
            }
        }
    }

    cout << max(ans[n-1][2], max(ans[n-1][1], ans[n-1][0])) << endl;
    return 0;
}