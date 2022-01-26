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
        ll x, n;
        cin >> x >> n;
        int jumps = n % 4;
        ll amount = n - (jumps - 1);
        for (int i = 0; i < jumps; i++) {
            if (x % 2 == 0) {
                x -= amount;
            } else {
                x += amount;
            }
            amount++;
        }
        cout << x << '\n';
    }
    return 0;
}