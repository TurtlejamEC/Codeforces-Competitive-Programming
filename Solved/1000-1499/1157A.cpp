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

ull f(ull x) {
    x += 1;
    while (x % 10 == 0) {
        x /= 10;
    }
    return x;
}

int main() {
    ull n;
    cin >> n;
    set<ull> found;
    ull cur = n;
    while (!(1 <= cur && cur <= 9)) {
        found.insert(cur);
        cur = f(cur);
    }
    cout << found.size() + 9;
    return 0;
}