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

int gcd (int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int left = n;
    left--;
    while (left--) {
        int a;
        cin >> a;
        prev = gcd(prev, a);
    }
    cout << prev*n;
    return 0;
}