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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> delta(n);
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            delta[i] = a-x;
        }
        sort(delta.rbegin(), delta.rend());
        ll sum = delta[0];
        if (sum < 0) {
            cout << 0 << endl;
            continue;
        }
        int i;
        for (i = 1; i < n; i++) {
            if (sum + delta[i] < 0) {
                break;
            }
            sum += delta[i];
        }
        cout << i << endl;
    }
    return 0;
}