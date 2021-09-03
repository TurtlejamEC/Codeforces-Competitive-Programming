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
    int n, m;
    cin >> n >> m;
    ull ans = 0;
    int prev = 0;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        x--;
        ans += ((x >= prev) ? x - prev : n - abs(x - prev));
        prev = x;
    }
    cout << ans;
    return 0;
}