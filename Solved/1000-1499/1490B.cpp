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
        int n;
        cin >> n;
        vector<int> remainderCount(3);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            remainderCount[a%3]++;
        }
        int ans = 0;
        for (int i = 0; i < 3; i++) {
            if (remainderCount[i] > n/3) {
                for (int j = 1; j <= 2; j++) {
                    if (remainderCount[(i - j + 3) % 3] < n/3) {
                        int give = min(n/3 - remainderCount[(i - j + 3) % 3], remainderCount[i] - n/3);
                        ans += give * (3-j);
                        remainderCount[i] -= give;
                        remainderCount[(i - j + 3) % 3] += give;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}