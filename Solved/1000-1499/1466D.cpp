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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> weights(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
            sum += weights[i];
        }

        vector<int> degree(n);
        for (int i = 0; i < n-1; i++) {
            int a, b;
            cin >> a >> b;
            degree[a-1]++;
            degree[b-1]++;
        }

        vector< pair<int, int> > final(n);
        for (int i = 0; i < n; i++) {
            final[i] = {weights[i], degree[i]};
        }

        sort(final.rbegin(), final.rend());

        cout << sum;
        int current = 0;
        for (int i = 0; i < n-2; i++) {
            if (current != n) {
                while (final[current].second == 1) {
                    current++;
                }
                sum += final[current].first;
                final[current].second--;
            }

            cout << ' ' << sum;
        }
        cout << endl;
    }
    return 0;
}