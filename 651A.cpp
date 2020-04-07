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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a > 0 && b > 0) {
        if (a == 1 && b == 1) {
            break;
        }
        if (a < b) {
            a += 1;
            b -= 2;
        } else {
            a -= 2;
            b += 1;
        }
        ans++;
    }
    cout << ans;
    return 0;
}