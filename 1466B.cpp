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
        vector<int> notes(n);
        for (int i = 0; i < n; i++) {
            cin >> notes[i];
        }
        sort(notes.begin(), notes.end());

        int lowest = -1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (notes[i] > lowest) {
                lowest = notes[i];
                ans++;
            } else if (notes[i] + 1 > lowest) {
                lowest = notes[i]+1;
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}