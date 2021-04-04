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

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> books(n);
    for (int i = 0; i < n ; i++) {
        cin >> books[i];
    }

    int l = 0, r = 0;
    int sum = books[0], size = 1;
    int ans = 0;
    while (l != n-1) {
        if (sum <= t) {
            ans = max(size, ans);

            if (r < n-1) {
                r++;
                size++;
                sum += books[r];
            } else {
                break;
            }
        } else {
            sum -= books[l];
            size--;
            l++;

            if (l == r) {
                r++;
                size++;
                sum += books[r];
            }
        }
    }

    if (n == 1) {
        ans = books[0] <= t ? 1 : 0;
    }
    cout << ans << endl;
    return 0;
}