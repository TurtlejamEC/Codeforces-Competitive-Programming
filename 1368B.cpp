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
    ll k;
    cin >> k;
    ll subsequences = 1;
    if (subsequences == k) {
        cout << "codeforces" << endl;
        return 0;
    }
    string codeforces = "codeforces";
    for (int i = 2; i <= 40; i++) {
        for (int j = 0; j < 10; j++) {
            subsequences /= i-1;
            subsequences *= i;

            if (subsequences >= k) {
                string ans = "";
                for (int k = 0; k <= j; k++) {
                    ans += string(i, codeforces[k]);
                }
                for (int k = j+1; k < 10; k++) {
                    ans += string(i-1, codeforces[k]);
                }
                cout << ans << endl;
                return 0;
            }
        }
    }
    return 0;
}