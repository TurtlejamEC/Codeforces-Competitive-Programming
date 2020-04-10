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
    int n;
    cin >> n;
    vector<string> board(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        board[i] = s;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int adj = 0;

            if (i > 0) {
                adj += board[i-1][j] == 'o';
            }

            if (i < n-1) {
                adj += board[i+1][j] == 'o';
            }

            if (j > 0) {
                adj += board[i][j-1] == 'o';
            }

            if (j < n-1) {
                adj += board[i][j+1] == 'o';
            }

            if (adj % 2 != 0) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}