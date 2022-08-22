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
        int n;
        cin >> n;
        vector<int> a(n);
        int zeroPhase = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            
            if (zeroPhase == 0 && a[i]) {
                zeroPhase = 1;
            } else if (zeroPhase == 1 && !a[i]) {
                zeroPhase = 2;
            } else if (zeroPhase == 2 && a[i]) {
                zeroPhase = 3;
            }
        }

        if (zeroPhase == 0) {
            cout << 0 << '\n';
        } else if (zeroPhase == 3) {
            cout << 2 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
    return 0;
}