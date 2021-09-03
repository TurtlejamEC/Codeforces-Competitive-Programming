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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (a*m <= b) {
        cout << n*a;
    } else {
        cout << min((n+m-1)/m*b,n/m*b+(n%m)*a);
    }
    return 0;
}