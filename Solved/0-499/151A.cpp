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
    int n, k, l, c, d, p, nl, np;
    cin >> n>> k>> l >> c >> d >> p >>nl >> np;
    int mL = k*l;
    int lime = c*d;
    cout << min(mL/(nl*n), min(lime/n, p/(np*n)));
    return 0;
}