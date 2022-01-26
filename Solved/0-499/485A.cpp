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

    int a, m;
    cin >> a >> m;
    int factor = __gcd(a, m);

    m /= factor;
    while (m != 1) {
        if (m % 2 != 0) {
            cout << "No" << '\n';
            return 0;
        }
        m /= 2;
    }

    cout << "Yes";
    return 0;
}