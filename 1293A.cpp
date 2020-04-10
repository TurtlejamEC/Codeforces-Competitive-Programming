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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, s, k;
        cin >> n >> s >> k;
        set<ll> closed;
        for (int i = 0; i < k; i++) {
            ll a;
            cin >> a;
            closed.insert(a);
        }

        for (int i = 0; i <= 1000; i++) {
            if (s+i<=n && closed.find(s+i) == closed.end() || s-i>=1 && closed.find(s-i) == closed.end() ) {
                cout << i << endl;
                break;
            }
        }

    }
    return 0;
}