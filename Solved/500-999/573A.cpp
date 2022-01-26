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

    ll n;
    cin >> n;
    vector<ll> nums(n);
    bool thereIs0 = false;
    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }
    

    ll gcd = nums[0];
    for (int i = 1; i < n; i++) {
        gcd = __gcd(gcd, nums[i]);
    }

    for (int i = 0; i < n; i++) {
        nums[i] /= gcd;
        while (nums[i] % 2 == 0) {
            nums[i] /= 2;
        }
        while (nums[i] % 3 == 0) {
            nums[i] /= 3;
        }

        if (nums[i] != 1) {
            cout << "No" << '\n';
            return 0;
        }
    }

    cout << "Yes" << '\n';
    return 0;
}