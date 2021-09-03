#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    while (a > 0 && c > 0 && d > 0) {
        ans += 256;
        a--; c--; d--;
    }
    while (a > 0 && b > 0) {
        ans += 32;
        a--; b--;
    }
    cout << ans;
    return 0;
}