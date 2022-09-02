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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        map<int, int> count;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (count.find(a) == count.end()) {
                count[a] = 0;
            }
            count[a]++;
        }

        vector<int> available;
        for (auto i: count) {
            available.emplace_back(i.second);
        }

        sort(available.rbegin(), available.rend());

        int choice = available.front() + 1;
        int ans = 0;
        for (int i: available) {
            ans += min(i, choice);
            choice = min(i, choice);

            if (choice > 0) {
                choice--;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}