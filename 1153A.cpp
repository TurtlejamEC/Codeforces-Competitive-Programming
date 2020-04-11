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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int earliest = INT_MAX;
    int id = -1;
    for (int i = 0; i < n; i++) {
        int s, d;
        cin >> s >> d;
        if (s >= t) {
            if (s < earliest) {
                earliest = s;
                id = i+1;
            }
        } else {
            if (((t-s+d-1)/d)*d+s < earliest) {
                earliest = ((t-s+d-1)/d)*d+s;
                id = i+1;
            }
        }
    }
    cout << id;
    return 0;
}