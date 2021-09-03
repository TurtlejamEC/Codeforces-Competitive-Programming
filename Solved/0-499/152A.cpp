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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }
    set<int> success;
    for (int i = 0; i < m; i++) {
        int best = 0;
        for (int j = 0; j < n; j++) {
            if (grades[j][i] - '0' > best) {
                best = grades[j][i] - '0';
            }
        }
        for (int j = 0; j < n; j++) {
            if (grades[j][i]-'0' == best) {
                success.insert(j);
            }
        }
    }
    cout << success.size();
    return 0;
}