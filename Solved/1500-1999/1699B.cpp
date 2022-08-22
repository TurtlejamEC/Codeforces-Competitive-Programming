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
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i % 4 == 0 || i % 4 == 3) {
                    cout << (j % 4 == 0 || j % 4 == 3) << " ";
                } else {
                    cout << (j % 4 == 1 || j % 4 == 2) << " ";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}