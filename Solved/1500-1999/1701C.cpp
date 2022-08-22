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
        int n, m;
        cin >> n >> m;
        vector<int> tasks(n);
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            tasks[a - 1]++;
        }

        int minTasks = m;
        for (int i = 0; i < n; i++) {
            minTasks = min(minTasks, tasks[i]);
        }

        set< pair<int, int> > workers;
        for (int i = 0; i < n; i++) {
            workers.insert({tasks[i] - minTasks, i});
        }

        int ans = (*workers.rbegin()).first;
        for (int i = 0; i < m; i++) {
            pair<int, int> hi = (*workers.rbegin());
            pair<int, int> lo = (*workers.begin());

            if (hi.first == 0) {
                break;
            }

            workers.erase(hi);
            workers.erase(lo);

            hi.first--;
            lo.first += 2;

            workers.insert(hi);
            workers.insert(lo);

            if (ans < (*workers.rbegin()).first) {
                break;
            } else {
                ans = (*workers.rbegin()).first;
            }
        }
        
        cout << (ans + minTasks) << '\n';
    }
    return 0;
}