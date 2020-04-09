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
    int a, b;
    cin >> a >> b;
    cout << (max(a,b) - min(a,b) == 1 || a == b && a != 0 ? "YES" : "NO");
    return 0;
}