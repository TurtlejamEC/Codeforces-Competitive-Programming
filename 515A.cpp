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
    int a, b, s;
    cin >> a >> b >> s;
    bool possible = true;
    if (s < abs(a) + abs(b)) {
        possible = false;
    } else {
        s -= abs(a)+abs(b);
        if (s%2 != 0) {
            possible = false;
        }
    }

    cout << (possible ? "Yes" : "No");
    return 0;
}