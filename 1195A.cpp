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
    int n, k;
    cin >> n >> k;
    vector<int> count(k+1);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
    }
    int ans = 0;
    int extra = 0;
    for (int i: count) {
        extra += i % 2;
        ans += i / 2 * 2;
    }
    cout << ans + (extra+1)/2;
    return 0;
}