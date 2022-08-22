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

pair<int, ull> breakDown(int big, int m) {
    int log = 0;
    while (big % m == 0) {
        big /= m;
        log++;
    }

    ull count = 1;
    while(log--) {
        count *= m;
    }
    return {big, count};
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<pair<int, ull> > brokenA;
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            pair<int, ull> result = breakDown(a[i], m);
            if (brokenA.empty()) {
                brokenA.push_back(result);
            } else if (result.first == brokenA.back().first) {
                (*brokenA.rbegin()).second += result.second;
            } else {
                brokenA.push_back(result);
            }
        }
        int k;
        cin >> k;
        vector<int> b(k);
        vector<pair<int, ull> > brokenB;
        for (int i = 0; i < k; i++) {
            cin >> b[i];

            pair<int, ull> result = breakDown(b[i], m);
            if (brokenB.empty()) {
                brokenB.push_back(result);
            } else if (result.first == brokenB.back().first) {
                (*brokenB.rbegin()).second += result.second;
            } else {
                brokenB.push_back(result);
            }
        }


        if (brokenA.size() != brokenB.size()) {
            cout << "No" << '\n';
            continue;
        }

        bool ans = true;
        for (int i = 0; i < brokenA.size(); i++) {
            if (brokenA[i] != brokenB[i]) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "Yes" : "No") << '\n';
    }
    return 0;
}