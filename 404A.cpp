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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> square(n);
    bool ans = true;
    for (int i = 0; i < n; i++) {
        cin >> square[i];
    }
    set<char> letters;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            letters.insert(square[i][j]);
        }
    }
    if (letters.size() != 2) ans = false;
    char ref = square[0][0];
    vector< vector<bool> > checked(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        if (square[i][i] != ref || square[n-1-i][i] != ref) {
            ans = false;
        }
        checked[i][i] = true;
        checked[n-1-i][i] = true;
    }
    ref = square[0][1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!checked[i][j] && square[i][j] != ref) {
                ans = false;
            }
        }
    }
    cout << (ans ? "YES" : "NO");

    return 0;
}