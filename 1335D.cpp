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

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector< vector<int> > board(9, vector<int>(9));
        for (int y = 0; y < 9; y++) {
            string s;
            cin >> s;
            for (int x = 0; x < 9; x++) {
                board[y][x] = s[x]-'0';
            }
        }

        board[1][0] = board[0][0];
        board[2][3] = board[1][3];
        board[0][6] = board[2][6];
        board[4][1] = board[3][1];
        board[5][4] = board[4][4];
        board[3][7] = board[5][7];
        board[7][2] = board[6][2];
        board[8][5] = board[7][5];
        board[6][8] = board[8][8];

        for (int y = 0; y < 9; y++) {
            for (int x = 0; x < 9; x++) {
                cout << board[y][x];
            }
            cout << endl;
        }
    }
    return 0;
}