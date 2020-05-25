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

int delta(ull a1) {
    int lo = 9, hi = 0;
    while (a1 > 0) {
        int digit = a1 % 10;
        lo = min(lo, digit);
        hi = max(hi, digit);
        a1 /= 10;
    }
    return lo*hi;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull a1, k;
        cin >> a1 >> k;
        for (ull i = 0; i < k-1; i++) {
            int change = delta(a1);
            if (change == 0) {
                break;
            } else {
                a1 += change;
            }
        }
        cout << a1 << endl;
    }
    return 0;
}