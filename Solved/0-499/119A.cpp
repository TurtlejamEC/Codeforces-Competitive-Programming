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

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a,b);
    }
    return a;
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> fixed = {a, b};
    int turn = 0;
    while (n >= gcd(n, fixed[turn])) {
        n -= gcd(n, fixed[turn]);
        turn = !turn;
    }
    cout << !turn;
    return 0;
}