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
    int n, m;
    cin >> n >> m;
    vector< vector<int> > A(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    vector< vector<int> > B(n, vector<int>(m));
    vector< pair<int, int> > moves;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < m-1; j++) {
            if (A[i][j] && A[i+1][j] && A[i][j+1] && A[i+1][j+1]) {
                moves.push_back({i+1, j+1});
                B[i][j] = B[i+1][j] = B[i][j+1] = B[i+1][j+1] = 1;
            }
        }
    }

    bool possible = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] != B[i][j]) {
                possible = false;
            }
        }
    }

    if (possible) {
        cout << moves.size() << endl;
        for (int i = 0; i < moves.size(); i++) {
            cout << moves[i].first << " " << moves[i].second << endl;
        }
    } else {
        cout << -1;
    }

    return 0;
}