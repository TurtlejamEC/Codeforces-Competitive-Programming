#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int hi = max(x1, max(x2, x3));
    int lo = min(x1, min(x2, x3));
    cout << (hi - lo);
    return 0;
}