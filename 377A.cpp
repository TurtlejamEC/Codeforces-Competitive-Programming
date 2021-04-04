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

void dfs(int y, int x, int& k, vector<vector<bool> >& visited, vector< vector<char> >& grid) {
    if (x < 0 || y < 0 || y >= grid.size() || x >= grid[0].size() || visited[y][x] || grid[y][x] == '#' || grid[y][x] == 'X') return;
    visited[y][x] = true;

    dfs(y-1, x, k, visited, grid);
    dfs(y, x-1, k, visited, grid);
    dfs(y+1, x, k, visited, grid);
    dfs(y, x+1, k, visited, grid);

    if (!k) return;
    grid[y][x] = 'X';
    k--;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector< vector<char> > grid(n, vector<char>(m));
    int startY, startX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '.') {
                startY = i;
                startX = j;
            }
        }
    }
    vector< vector< bool > >  visited(n, vector<bool>(m));
    dfs(startY, startX, k, visited, grid);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}