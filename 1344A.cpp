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

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> shifts(n);
        for (int i = 0; i < n; i++) {
            cin >> shifts[i];
        }
        set<int> newSpots;
        for (int i = 0; i < n; i++) {
            newSpots.insert((((i + shifts[i]) % n) + n) % n);
        }
        cout << (newSpots.size() == n ? "YES" : "NO") << endl;
    }
    return 0;
}