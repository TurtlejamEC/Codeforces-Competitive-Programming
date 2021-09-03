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
#include <climits>
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sizes(3);
    for (int i = 0; i < 3; i++) {
        cin >> sizes[i];
    }

    vector<int> ans(4000+1);
    for (int j = 0; j < 3; j++) {
        ans[sizes[j]] = 1;
    }
    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < 3; j++) {
            if (ans[i] != 0 && i + sizes[j] <= n) {
                ans[i+sizes[j]] = max(ans[i] + 1, ans[i+sizes[j]]);
            }
        }
    }

    cout << ans[n];
    return 0;
}