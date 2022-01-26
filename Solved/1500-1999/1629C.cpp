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
    vector<queue<int> > pos(n + 1);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      pos[a].push(i);
    }

    int hi = n + 1;
    int oldCurrent = 0;
    int newCurrent = 0;
    vector<int> ans;
    while (hi != 0 && oldCurrent < n) {
      newCurrent = oldCurrent;
      for (int i = 0; i <= n; i++) {
        while (!pos[i].empty() && pos[i].front() < oldCurrent) {
          pos[i].pop();
        }

        if (pos[i].empty()) {
          hi = i;
          break;
        }

        newCurrent = max(newCurrent, pos[i].front());
      }

      ans.push_back(hi);
      oldCurrent = newCurrent + 1;
    }

    for (int i = 0; i <= n; i++) {
      if (!pos[i].empty()) {
        while (!pos[i].empty() && pos[i].front() < oldCurrent) {
          pos[i].pop();
        }

        for (int j = 0; j < pos[i].size(); j++) {
          ans.push_back(0);
        }
      }
    }

    cout << ans.size() << '\n';
    for (int i : ans) {
      cout << i << " ";
    }
    cout << '\n';
  }
  return 0;
}