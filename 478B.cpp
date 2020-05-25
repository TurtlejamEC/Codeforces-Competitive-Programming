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

ull nChoose2(ull n) {
    return n*(n-1)/2;
}

int main() {
    ull n, m;
    cin >> n >> m;
    ull min;
    cout << (n%m) * nChoose2(n/m + 1) + (m-n%m) * nChoose2(n/m) << " " << nChoose2(n-(m-1));
    return 0;
}