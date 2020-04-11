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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        vector<int> count(3);
        bool possible = true;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            if (b[i] > a[i]) {
                if (!count[2]) {
                    possible = false;
                    break;
                }
            } else if (b[i] < a[i]) {
                if (!count[0]) {
                    possible = false;
                    break;
                }
            }
            count[a[i]+1]++;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}