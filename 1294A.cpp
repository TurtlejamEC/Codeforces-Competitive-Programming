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

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int hi = max(a, max(b, c));
        int balanceOut = 3*hi - a - b - c;
        n -= balanceOut;
        if (n < 0) {
            cout << "NO" << endl;
            continue;
        }
        cout << (n % 3 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}