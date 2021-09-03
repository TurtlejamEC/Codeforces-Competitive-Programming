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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    sort(price.begin(), price.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int coins;
        cin >> coins;
        cout << (upper_bound(price.begin(), price.end(), coins) - price.begin()) << endl;
    }
    return 0;
}