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
    vector<int> shop(m);
    for (int i = 0; i < m; i++) {
        cin >> shop[i];
    }
    sort(shop.begin(), shop.end());
    int ans = shop[shop.size() - 1] - shop[0];
    for (int i = n-1; i < m; i++) {
        ans = min(ans, shop[i] - shop[i-n+1]);
    }
    cout << ans;
    return 0;
}