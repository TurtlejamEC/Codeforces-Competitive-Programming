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
    long long n, k;
    cin >> n >> k;
    long long b = (-3 + (long long)round(sqrt(9+4*(2*(n+k)))))/2;
    cout << n - b;

    return 0;
}