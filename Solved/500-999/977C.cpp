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
    int n, k;
    cin >> n >> k;

    map<int, int> count;
    set<int> distinct;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (count.find(a) == count.end()) {
            count[a] = 1;
        } else {
            count[a]++;
        }
        distinct.insert(a);
    }

    if (k == 0 && *distinct.begin() > 1) {
        cout << 1;
        return 0;
    }

    int countSum = 0;
    for (int i: distinct) {
        countSum += count[i];

        if (countSum == k) {
            cout << i;
            break;
        } else if (countSum > k) {
            cout << -1;
            break;
        }
    }
    return 0;
}