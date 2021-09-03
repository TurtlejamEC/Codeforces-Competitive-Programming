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
        if (n == 2 || n == 3) {
            cout << -1 << endl;
            continue;
        } else if (n == 4) {
            cout << "3 1 4 2" << endl;
            continue;
        }

        int current = n;
        if (!(current&1)) current--;
        while (current > 0) {
            cout << current << " ";
            current -= 2;
        }
        cout << "4 2 ";
        current = 6;
        while (current <= n) {
            cout << current << " ";
            current += 2;
        }
        cout << endl;
    }
    return 0;
}