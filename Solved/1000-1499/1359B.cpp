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

    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector< vector<char> > grid(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        for (int r = 0; r < n; r++) {
            vector< vector<int> > cost(2, vector<int>(m, 1e8));
            if (grid[r][0] == '.') {
                cost[0][0] = x;
            } else {
                cost[0][0] = 0;
            }

            for (int i = 1; i < m; i++) {
                if (grid[r][i] == '.') {
                    // place 1 tile, white
                    cost[0][i] = min(cost[0][i-1], cost[1][i-1]) + x;

                    //place 2 tile, white
                    if (grid[r][i - 1] == '.') {
                        if (i - 2 == -1) {
                            cost[1][i] = y;
                        } else {
                            cost[1][i] = min(cost[0][i - 2], cost[1][i - 2]) + y;
                        }
                    }
                } else {
                    cost[0][i] = min(cost[0][i-1], cost[1][i-1]);
                    cost[1][i] = min(cost[0][i-1], cost[1][i-1]);
                }
            }

            ans += min(cost[0][m - 1], cost[1][m - 1]);
        }
        cout << ans << '\n';
        
    }

    return 0;
}