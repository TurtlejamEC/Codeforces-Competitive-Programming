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
    int s, n;
    cin >> s >> n;
    vector< pair<int, int> > dragons(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        dragons[i] = {a, b};
    }
    sort(dragons.begin(), dragons.end());
    bool possible = true;
    for (int i = 0; i < dragons.size(); i++) {
        possible &= (s > dragons[i].first);
        s += dragons[i].second;
    }
    cout << (possible ? "YES" : "NO");
    return 0;
}