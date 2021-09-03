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
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    x = (int)(round(sqrt(a*b/c)));
    y = (int)(round(sqrt(a*c/b)));
    z = (int)(round(sqrt(b*c/a)));
    cout << 4*(x+y+z);
    return 0;
}