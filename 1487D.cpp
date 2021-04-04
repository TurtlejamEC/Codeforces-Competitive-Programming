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

//1073739253
//1073741465

int main() {
    vector<ll> cs;
    for (ll i = 3; i < 50000; i++) {
        ll a2 = i*i;
        if (!(a2&1)) continue;
        ll b = a2/2;
        ll c = a2/2+1;
        if (c*c-b*b == a2) {
            cs.push_back(c);
        }
    }
//    sort(cs.begin(), cs.end());
//    cout << *cs.rbegin() << endl;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << upper_bound(cs.begin(), cs.end(), n) - cs.begin() << endl;
    }
    return 0;
}