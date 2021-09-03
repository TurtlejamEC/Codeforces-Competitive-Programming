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
    int n;
    cin >> n;
    vector<int> chocolate(n);
    for (int i = 0; i < n; i++) {
        cin >> chocolate[i];
    }
    ll ans = chocolate[n-1];
    int hi = ans-1;
    for (int i = n-2; i >= 0; i--) {
        if (hi <= 0) {
            break;
        }
        if (chocolate[i] >= hi) {
            ans += hi;
            hi--;
        } else {
            ans += chocolate[i];
            hi = chocolate[i]-1;
        }
    }
    cout << ans;
    return 0;
}