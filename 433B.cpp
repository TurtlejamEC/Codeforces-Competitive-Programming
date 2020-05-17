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
    vector<int> stones(n);
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }
    vector<ull> prefixNormal(n+1);
    for (int i = 1; i <= n; i++) {
        prefixNormal[i] = prefixNormal[i-1] + stones[i-1];
    }
    sort(stones.begin(), stones.end());
    vector<ull> prefixSorted(n+1);
    for (int i = 1; i <= n; i++) {
        prefixSorted[i] = prefixSorted[i-1] + stones[i-1];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, l, r;
        cin >> a >> l >> r;
        if (a == 1) {
            cout << prefixNormal[r]-prefixNormal[l-1] << endl;
        } else {
            cout << prefixSorted[r]-prefixSorted[l-1] << endl;
        }
    }
    return 0;
}