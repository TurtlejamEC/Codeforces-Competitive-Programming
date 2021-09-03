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
    ull n, k;
    cin >> n >> k;
    if (k <= n/2 + n%2) { // odd
        cout << 2*k-1;
    } else {
        cout << 2*(k-(n/2 + n%2));
    }
    return 0;
}