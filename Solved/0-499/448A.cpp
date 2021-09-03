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

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2>> a3>> b1 >> b2 >> b3;
    int cups = a1 + a2 + a3;
    int medals = b1 + b2 + b3;
    int n; cin>> n;
    n -= (cups+4) / 5;
    n -= (medals+9) / 10;
    cout << (n < 0 ? "NO" : "YES");
    return 0;
}