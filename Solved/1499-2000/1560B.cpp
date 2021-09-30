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
        long long a, b, c;
        cin >> a >> b >> c;
        long long half = abs(a-b);
        long long mod = half*2;
        if (a > b) {
            swap(a,b);
        }

        a--;
        b--;
        c--;
        if (a >= mod || b >= mod || c >= mod) {
            cout << -1 << '\n';
            continue;
        }

        cout << ((c + half) % mod + mod) % mod + 1 << '\n';
    }
    return 0;
}