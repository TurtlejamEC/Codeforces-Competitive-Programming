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
    vector< pair<int, string> > strs(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strs[i] = {s.size(), s};
    }
    sort(strs.begin(), strs.end());
    for (int i = 1; i < n; i++) {
        if (strs[i].second.find(strs[i-1].second) == string::npos) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    for (auto i: strs) {
        cout << i.second << endl;
    }
    return 0;
}