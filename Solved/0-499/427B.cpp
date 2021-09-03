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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n, t, c;
    cin >> n >> t >> c;
    vector<int> prisoners(n);
    for (int i = 0; i < n; i++) {
        cin >> prisoners[i];
    }
    int streak = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (prisoners[i] > t) {
            ans += max(0, streak - c + 1);
            streak = 0;
        } else {
            streak++;
        }
    }
    ans += max(0, streak - c + 1);
    cout << ans;
    return 0;
}