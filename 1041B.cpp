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

ull gcd(ull a, ull b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ull a, b, x, y;
    cin >> a >> b >> x >> y;
    ull factor = gcd(x, y);
    x /= factor;
    y /= factor;
    cout << min(a/x, b/y);
    return 0;
}