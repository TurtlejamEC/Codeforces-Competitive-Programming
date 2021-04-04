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
        int px, py;
        cin >> px >> py;
        string s;
        cin >> s;
        vector<int> count(4);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                count[0]++;
            } else if (s[i] == 'U') {
                count[1]++;
            } else if (s[i] == 'L') {
                count[2]++;
            } else if (s[i] == 'D') {
                count[3]++;
            }
        }

        bool possible = true;
        possible &= (px > 0 ? count[0] >= px : count[2] >= abs(px));
        possible &= (py > 0 ? count[1] >= py : count[3] >= abs(py));
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}