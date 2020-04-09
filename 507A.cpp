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
    int n, k;
    cin >> n >> k;
    vector< pair<int, int> > instruments(n);
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        instruments[i] = {d, i+1};
    }
    sort(instruments.begin(), instruments.end());
    vector<int> ans;
    int days = 0;
    for (int i = 0; i < n; i++) {
        if (days + instruments[i].first <= k) {
            ans.push_back(instruments[i].second);
            days += instruments[i].first;
        } else {
            break;
        }
    }
    cout << ans.size() << endl;
    for (int i: ans) {
        cout << i << " ";
    }
    return 0;
}