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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;
        }

        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }

        int diff = p[1] - p[0];
        if (abs(diff) != 1) {
            if (diff == n-1 && p[0] == 0) {
                diff = -1;
            } else if (diff == 1-n && p[0] == n-1) {
                diff = 1;
            } else {
                cout << "NO" << endl;
                continue;
            }
        }

        int prev = p[0];
        bool ans = true;
        for (int i = 1; i < n; i++) {
            if ((prev + diff + n) % n != p[i]) {
                ans = false;
                break;
            }
            prev = p[i];
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}