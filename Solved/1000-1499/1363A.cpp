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
        int odd = 0, even = 0;
        while (n--) {
            int a;
            cin >> a;
            if (a % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        int left = x;
        left -= min((left%2==0 ? left-1 : left), (odd%2==0 ? odd-1 : odd));
        if (left < x) {
            left -= min(left, even);
        }

        if (left) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}