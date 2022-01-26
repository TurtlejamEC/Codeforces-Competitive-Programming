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
    int n;
    cin >> n;
    int totalXor = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      totalXor ^= a;
      nums[i] = a;
    }

    if (totalXor == 0) {
      cout << "YES" << '\n';
      continue;
    } else {
      int currentXor = 0;
      int equal = 0;
      for (int i = 0; i < n; i++) {
        currentXor ^= nums[i];
        if (currentXor == totalXor) {
          equal++;
          currentXor = 0;
        }
      }

      cout << (equal >= 3 ? "YES" : "NO") << '\n';
    }
  }
  return 0;
}