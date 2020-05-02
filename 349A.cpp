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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> have(3);
    bool ans = true;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 25) {
            have[0]++;
        } else if (a == 50) {
            if (have[0]) {
                have[0]--;
                have[1]++;
            } else {
                ans = false;
                break;
            }
        } else if (a == 100) {
            if (have[1] && have[0]) {
                have[1]--;
                have[0]--;
                have[2]++;
            } else if (have[0] >= 3) {
                have[0] -= 3;
                have[2]++;
            } else {
                ans = false;
                break;
            }
        }
    }
    cout << (ans ? "YES" : "NO");
    return 0;
}