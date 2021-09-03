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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> heights(n+1, INT_MAX);
        for (int i = 1; i <= n; i++) {
            cin >> heights[i];
        }

        int lo = INT_MAX;
        vector<int> positions;
        stack<int> considering;
        int ans = -1;
        while (k > 0) {
            positions.clear();
            while (!considering.empty()) {
                considering.pop();
            }
            lo = INT_MAX;
            for (int i = 1; i <= n; i++) {
                if (heights[i] > heights[i-1]) {
                    while (!considering.empty()) {
                        positions.push_back(considering.top());
                        considering.pop();
                    }
                    break;
                }

                if (heights[i] < lo) {
                    positions.clear();
                    while (!considering.empty()) {
                        considering.pop();
                    }
                    lo = heights[i];
                }

                if (heights[i] == lo) {
                    considering.push(i);
                }
            }

            if (positions.empty()) {
                ans = -1;
                break;
            } else {
                if (positions.size() < k) {
                    k -= positions.size();
                    for (int i: positions) {
                        heights[i]++;
                    }
                } else {
                    ans = positions[k-1];
                    k -= k;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}