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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long double t = 10e9;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, s;
        cin >> x >> y >> s;
        long double dist = sqrt((x-a)*(x-a) + (y-b)*(y-b));
        t = min(dist/s, t);
    }
    cout.precision(numeric_limits<long double>::max_digits10);
    cout << t;

    return 0;
}