#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int total = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        total -= a;
        total += b;
        ans = max(total, ans);
    }
    cout << ans;
    return 0;
}