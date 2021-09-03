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

bool verify(vector<int>& lanterns, long double r, int l) {
    int prev = 0;
    if (prev + r < lanterns[0]) {
        return false;
    }
    prev = lanterns[0];
    for (int i = 1; i < lanterns.size(); i++) {
        if (prev + 2*r < lanterns[i]) {
            return false;
        }

        prev = lanterns[i];
    }
    return (prev + r >= l);
}

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> lanterns(n);
    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    long double prev = 0;
    long double hi = l;
    long double lo = 0;
    long double r = (hi+lo)/2;
    while ((ull)(prev * 10e9) != (ull)(r * 10e9)) {
        if (verify(lanterns, r, l)) {
            hi = r;
        } else {
            lo = r;
        }
        prev = r;
        r = (hi+lo)/2;
    }
    cout << fixed << setprecision(9) << r;
    return 0;
}