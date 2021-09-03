#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector< pair<int, int> > colors(n);
    for (int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        colors[i] = {h, a};
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            ans += (colors[i].first == colors[j].second) + (colors[i].second  == colors[j].first);
        }
    }
    cout << ans;
    return 0;
}