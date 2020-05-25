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
        string s;
        cin >> s;
        vector< pair<int, int> > adjusted;
        adjusted.push_back({s[0] - '0', 0});
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i - 1]) {
                adjusted.push_back({s[i] - '0', i});
            }
        }

        deque< pair<int, int> > currentSegment;
        vector<bool> seen(4);
        int ans = INT_MAX;
        for (int i = 0; i < adjusted.size(); i++) {
            while (seen[adjusted[i].first]) {
                pair<int, int> popped = currentSegment.front();
                currentSegment.pop_front();
                seen[popped.first] = false;
            }

            currentSegment.push_back(adjusted[i]);
            seen[adjusted[i].first] = true;

            if (seen[1] && seen[2] && seen[3]) {
                ans = min(ans, currentSegment.back().second - (currentSegment[1].second - 1) + 1);
            }
        }

        cout << (ans == INT_MAX ? 0 : ans) << endl;
    }
    return 0;
}