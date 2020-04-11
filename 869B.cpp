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
    ull a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 1;
        return 0;
    }
    ull start = 1;
    if (a != 0) {
        start = a+1;
    }
    ull ans = start%10;
    for (ull i = start+1; i <= b; i++) {
        if (ans == 0) {
            break;
        }
        ull fac = i%10;
        ans *= fac;
        ans %= 10;
    }
    cout << ans;
    return 0;
}