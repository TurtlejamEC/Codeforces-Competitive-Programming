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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    vector< pair<int, int> > pairs(n);
    for (int i = 0; i < n; i++) {
      pairs[i] = {a[i], b[i]};
    }
    
    sort(pairs.begin(), pairs.end());
    for (int i = 0; i < n; i++) {
      if (k >= pairs[i].first) {
        k += pairs[i].second;
      }
    }

    cout << k << '\n';
  }
  return 0;
}