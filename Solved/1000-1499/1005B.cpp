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

    string a, b;
    cin >> a >> b;
    int same = 0;
    while (same < min(a.size(), b.size())) {
        if (a[a.size()-1-same] == b[b.size()-1-same]) {
            same++;
        } else {
            break;
        }
    }
    cout << (a.size() - same) + (b.size() - same) << '\n';
    return 0;
}