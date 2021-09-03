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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    ull a, b;
    cin >> a >> b;
    ull ans = 0;
    while (a != b && a != 0 && b != 0) {
        if (a > b) {
            ans += a / b;
            a %= b;
        } else {
            ans += b / a;
            b %= a;
        }
    }
    cout << ans;
    return 0;
}