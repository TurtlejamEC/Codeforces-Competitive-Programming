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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    if (c == 0) {
        ans = a == b;
    } else {
        if (a < b && c <= 0 || a > b && c >= 0) {
            ans = false;
        } else {
            ans = ((b-a) % c == 0);
        }
    }
    cout << (ans ? "YES" : "NO");
    return 0;
}