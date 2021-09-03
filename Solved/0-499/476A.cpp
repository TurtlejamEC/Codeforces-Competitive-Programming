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
#include <climits>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> possible(n+1, INT_MAX);
    possible[0] = 0;
    for (int i = 0; i < possible.size(); i++) {
        if (possible[i] != INT_MAX) {
            for (int j = m; j <= 2*m; j++) {
                if (i+j <= n) {
                    possible[i+j] = min(possible[i+j], possible[i]+1);
                }
            }
        }
    }
    cout << (possible[n] != INT_MAX ? possible[n]*m : -1);
    return 0;
}