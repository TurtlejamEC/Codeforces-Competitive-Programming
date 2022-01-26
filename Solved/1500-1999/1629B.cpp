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
    int l, r, k;
    cin >> l >> r >> k;
    if (l == r) {
      cout << (l == 1 ? "NO" : "YES") << '\n';
      continue;
    }

    int num = r - l + 1;
    if (num & 1) {
      if (l & 1) {
        cout << ((num / 2 + 1 <= k) ? "YES" : "NO") << '\n';
      } else {
        cout << ((num / 2) <= k ? "YES" : "NO") << '\n';
      }
    } else {
      cout << ((num / 2) <= k ? "YES" : "NO") << '\n';
    }
  }
  return 0;
}