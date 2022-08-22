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
    int l, r;
    cin >> l >> r;
    ull answer = r - l;
    int power = 10;
    for (int i = 1; i <= 9; i++) {
      answer += (l % power + (r - l)) / power;
      power *= 10;
    }
    cout << answer << '\n';
  }
  return 0;
}
