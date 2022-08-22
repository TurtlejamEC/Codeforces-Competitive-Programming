#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int> > > range;
    bool possible = true;
    int t, l, r;
    cin >> t >> l >> r;
    range.push_back({t, {l, r}});
    for (int i = 1; i < n; i++) {
      cin >> t >> l >> r;
      range.push_back({t, {l, r}});
    }

    if (!possible) {
      cout << "NO" << '\n';
      continue;
    }

    int hi = m, lo = m;
    t = 0;
    for (int i = 0; i < range.size(); i++) {
      int deltaT = range[i].first - t;
      pair<int, int> nextRange = range[i].second;

      if (hi + deltaT <= nextRange.second) {
        hi += deltaT;
        possible = hi >= nextRange.first;
      } else {
        hi = nextRange.second;
      }

      if (lo - deltaT >= nextRange.first) {
        lo -= deltaT;
        possible = lo <= nextRange.second;
      } else {
        lo = nextRange.first;
      }

      t = range[i].first;

      if (!possible) {
        break;
      }
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }
  return 0;
}
