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

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (time >= i * 5) {
            ans++;
            time -= i * 5;
        } else {
            break;
        }
    }
    cout << ans;
    return 0;
}