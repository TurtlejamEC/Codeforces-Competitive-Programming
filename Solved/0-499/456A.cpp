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

bool compare(pair<int ,int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}

int main() {
    int n;
    cin >> n;
    vector< pair<int, int> > laptops(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        laptops[i] = {a, b};
    }
    sort(laptops.begin(), laptops.end(), compare);
    bool ans = false;
    for (int i = 1; i < n; i++) {
        if (laptops[i-1].first < laptops[i].first && laptops[i-1].second > laptops[i].second) {
            ans = true;
            break;
        }
    }
    cout << (ans ? "Happy Alex" : "Poor Alex");
    return 0;
}