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
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        ull sum = 0;
        vector<int> given;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
            given.push_back(a);
        }

        int firstNotDivisible = -1;
        for (int i = 0; i < n; i++) {
            if (given[i] % x != 0) {
                firstNotDivisible = i;
                break;
            }
        }

        int lastNotDivisible = -1;
        for (int i = n-1; i >= 0; i--) {
            if (given[i] % x != 0) {
                lastNotDivisible = i;
                break;
            }
        }

        if (sum % x != 0) {
            cout << n;
        } else if (firstNotDivisible == -1) {
            cout << -1;
        } else {
            cout << max(n - (firstNotDivisible + 1), n - (n - lastNotDivisible));
        }
        cout << endl;
    }
    return 0;
}