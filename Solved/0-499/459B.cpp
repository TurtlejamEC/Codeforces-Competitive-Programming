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
    vector<int> flowers(n);
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }

    sort(flowers.begin(), flowers.end());

    int lo = flowers.front();
    int hi = flowers.back();
    ull numLo = 0, numHi = 0;
    for (int i = 0; i < n; i++) {
        if (flowers[i] == lo) {
            numLo++;
        } else {
            break;
        }
    }

    for (int i = n-1; i >= 0; i--) {
        if (flowers[i] == hi) {
            numHi++;
        } else {
            break;
        }
    }

    if (lo == hi) {
        cout << 0 << " " << numLo * (numLo-1) / 2;
    } else {
        cout << (hi - lo) << " " << numLo * numHi;
    }
    return 0;
}