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
    int n, a, b;
    cin >> n >> a >> b;
    if (a == 1) {
      cout << ((n - 1) % b == 0 ? "yes" : "no") << '\n';
      continue;
    }

    long long aPower = 1;
    while (aPower <= n) {
      if ((n - aPower) % b == 0) {
        n = 0;
        break;
      }
      aPower *= a;
    }

    if (n == 0) {
      cout << "yes" << '\n';
    } else {
      cout << "no" << '\n';
    }
  }
  return 0;
}