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

  int n;
  cin >> n;
  priority_queue<int> nums;
  ull sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    nums.push(a);
    sum += a;
  }

  ull withoutLast = sum - nums.top();

  if (sum & 1 || withoutLast < nums.top()) {
    cout << "NO" << '\n';
    return 0;
  }
  cout << "YES" << '\n';

  return 0;
}