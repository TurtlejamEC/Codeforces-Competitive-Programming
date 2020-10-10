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
    vector<int> totalOdds(2);
    vector<int> swappable(2);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        totalOdds[0] += a % 2 == 1;
        totalOdds[1] += b % 2 == 1;
        if (a % 2 != b % 2) {
            swappable[0] += a % 2 == 1;
            swappable[1] += b % 2 == 1;
        }
    }

    if (totalOdds[0] % 2 == 0 && totalOdds[1] % 2 == 0) {
        cout << 0 << endl;
    } else if (totalOdds[0] % 2 == 1 && totalOdds[1] % 2 == 1) {
        cout << (swappable[0] || swappable[1] ? 1 : -1) << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}