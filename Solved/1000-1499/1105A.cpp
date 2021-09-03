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
    vector<int> sticks(n);
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
    }
    int best = -1;
    int loCost = INT_MAX;
    for (int i = 1; i <= 100; i++) {
        int cost = 0;
        for (int j = 0; j < n; j++) {
            int adjust = INT_MAX;
            if (i >= 2) {
                adjust = min(adjust, abs(sticks[j]-(i-1)));
            }

            adjust = min(adjust, abs(sticks[j]-(i)));

            if (i <= 99) {
                adjust = min(adjust, abs(sticks[j]-(i+1)));
            }

            cost += adjust;
        }

        if (cost < loCost) {
            best = i;
            loCost = cost;
        }
    }
    cout << best << " " << loCost;
    return 0;
}