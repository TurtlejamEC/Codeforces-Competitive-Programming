#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << (m*n - ((m*n) % 2)) / 2;
    return 0;
}