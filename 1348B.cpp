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
        int n, k;
        cin >> n >> k;
        set<int> distinct;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            distinct.insert(a);
        }
        if (distinct.size() > k) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 1; i <= n; i++) {
            if (distinct.size() == k) break;

            distinct.insert(i);
        }

        cout << n * k << endl;
        for (int i = 0; i < n; i++) {
            for (int i: distinct) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}