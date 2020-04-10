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
    int n, c;
    cin >> n >> c;
    vector<int> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }
    int bestDiff = 0;
    for (int i = 1; i < n-1; i++) {
        if (days[i] - days[i+1] > days[bestDiff] - days[bestDiff + 1]) {
            bestDiff = i;
        }
    }
    int diff = days[bestDiff] - days[bestDiff + 1];
    cout << max(0, diff - c);

    return 0;
}