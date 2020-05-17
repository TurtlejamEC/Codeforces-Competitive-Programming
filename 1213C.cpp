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
    int q;
    cin >> q;
    while (q--) {
        ull n, m;
        cin >> n >> m;
        ull multiples = n / m;
        vector<int> digits(10);
        ull cumulative = 0;
        for (int i = 0; i < 10; i++) {
            digits[i] = ((i+1)*m)%10;
            cumulative += digits[i];
        }
        ull ans = multiples/10 * cumulative;
        for (int i = 0; i < multiples % 10; i++) {
            ans += digits[i];
        }
        cout << ans << endl;
    }
    return 0;
}