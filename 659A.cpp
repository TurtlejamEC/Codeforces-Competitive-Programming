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

#define ull un  signed long long
#define ll long long

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    cout << (a + b%n + n) % n + 1;
    return 0;
}