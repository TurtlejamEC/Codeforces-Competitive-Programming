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
    vector<int> fence(n);
    for (int i = 0; i < n; i++) {
        cin >> fence[i];
    }
    int lo, cur = 0;
    int ans = 0;
    for (int i = 0; i < k; i++) {
        cur += fence[i];
    }
    lo = cur;
    for (int i = k; i < n; i++) {
        cur -= fence[i-k];
        cur += fence[i];

        if (cur < lo) {
            lo = cur;
            ans = i-k+1;
        }
    }

    cout << ans+1;
    return 0;
}