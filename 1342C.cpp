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

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

ull countEqual(ull n, ull b, ull lcm) {
    ull result = n/lcm*b;
    result += min(b, n%lcm+1);
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, q;
        cin >> a >> b >> q;
        if (a > b) swap(a, b);
        int lcm = a*b/gcd(a,b);
        for (int i = 0; i < q; i++) {
            ull l, r;
            cin >> l >> r;
            cout << (r-l+1) - (countEqual(r, b, lcm) - countEqual(l-1, b, lcm)) << ' ';
        }
        cout << '\n';
    }
    return 0;
}