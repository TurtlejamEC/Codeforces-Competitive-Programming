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
    vector<int> parity(n);
    vector<int> count(2);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        parity[i] = a%2;
        count[a%2]++;
    }

    int lookFor = (count[0] == 1 ? 0 : 1);
    for (int i = 0; i < n; i++) {
        if (parity[i] == lookFor) {
            cout << i+1;
            break;
        }
    }
    return 0;
}