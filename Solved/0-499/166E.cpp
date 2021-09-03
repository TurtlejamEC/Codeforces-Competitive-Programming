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
    ull abc = 1, d = 0;
    for (int i = 1; i < n; i++) {
        tie(abc, d) = make_tuple(((abc+abc)%1000000007+d)%1000000007, ((abc+abc)%1000000007+abc)%1000000007);
    }
    cout << d;
//    vector< vector<int> > ans(n, vector<int>(4));
//    ans[0][0] = 1;
//    ans[0][1] = 1;
//    ans[0][2] = 1;
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < 4; j++) {
//            for (int k = 0; k < 4; k++) {
//                if (k == j) continue;
//                ans[i][j] = (ans[i][j] + ans[i-1][k]) % 1000000007;
//            }
//            cout << ans[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << ans[n-1][3] << endl;
    return 0;
}