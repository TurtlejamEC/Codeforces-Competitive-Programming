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

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector< vector< pair<int, int> > > substrings(2);
  int start = 0;
  int prevLength = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] != s[start]) {
      if (start == 0) {
        substrings[(s[start] - 'a') ^ 1].push_back({0, 0});
      }

      substrings[s[start] - 'a'].push_back({i - 1 - start + 1, prevLength});
      prevLength = i - 1 - start + 1;
      start = i;
    }
  }
  substrings[s[start] - 'a'].push_back({n - 1 - start + 1, prevLength});
  substrings[(s[start] - 'a') ^ 1].push_back({0, n - 1 - start + 1});

  int ans = 0;
  int usedCost = 0;
  for (int i = 0; i < 2; i++) {
    int l = 0;
    int r = 0;
    int cost = 0;
    int length = 0;

    for (; r < substrings[i].size(); r++) {
      length += substrings[i][r].first + substrings[i][r].second;
      cost += substrings[i][r].second;

      while (cost > k && l < r) {
        length -= substrings[i][l].first + substrings[i][l + 1].second;
        cost -= substrings[i][l + 1].second;
        l++;
      }

      if (ans < length) {
        ans = length;
        usedCost = cost;
      } else if (ans == length) {
        usedCost = min(usedCost, cost);
      }
    }
  }

  cout << min(n, ans + (k - usedCost)) << '\n';
  return 0;
}
