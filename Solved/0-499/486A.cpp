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
    ll n;
    cin >> n;
    cout << ((n+1)/2 * (n % 2 == 0 ? 1 : -1));
    return 0;
}