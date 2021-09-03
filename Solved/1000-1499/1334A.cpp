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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector< pair<int, int> > record(n);
        bool ans = true;
        for (int i = 0; i < n; i++) {
            int p, c;
            cin >> p >> c;
            record[i] = {p, c};
        }
        pair<int, int> prev = {0, 0};
        for (int i = 0; i < n; i++) {
            pair<int, int> cur = record[i];
            if (cur.first < prev.first || cur.second < prev.second) {
                ans = false;
                break;
            } else if (cur.second - prev.second > cur.first - prev.first) {
                ans = false;
                break;
            }
            prev = record[i];
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}