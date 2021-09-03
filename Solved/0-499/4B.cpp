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
    int d, sumTime;
    cin >> d >> sumTime;
    vector< pair<int, int> > bounds(d);
    int soFar = 0;
    vector<int> studied(d);
    for (int i = 0; i < d; i++) {
        int l, r;
        cin >> l >> r;
        bounds[i] = {l, r};
        soFar += l;
        studied[i] = l;
    }

    for (int i = 0; i < d; i++) {
        int change = max(0, min(bounds[i].second - bounds[i].first, sumTime - soFar));
        studied[i] += change;
        soFar += change;
    }

    if (soFar != sumTime) {
        cout << "NO";
    } else {
        cout << "YES" << endl;
        for (int i: studied) {
            cout << i << " ";
        }
    }

    return 0;
}