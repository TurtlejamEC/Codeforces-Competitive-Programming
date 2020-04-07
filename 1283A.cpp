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
    int t;
    cin >> t;
    int ans = 0;
    while (t--) {
        int h, m;
        cin >> h >> m;
        ans = 60 - m;
        ans += (23 - h) * 60;
        cout << ans << endl;
    }
    return 0;
}