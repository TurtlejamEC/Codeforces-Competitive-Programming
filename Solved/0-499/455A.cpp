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
    int n;
    cin >> n;
    vector<ull> count(100001);
    for (int i = 0; i < n; i++) {
        ull a;
        cin >> a;
        count[a]++;
    }

    vector<vector<ull> > ans(100001, vector<ull>(2)); // ans[i][j] = answer if number = i and (bool)j = used it
    ans[1][1] = count[1];
    for (ull i = 2; i <= 100000; i++) {
        ans[i][0] = max(ans[i-1][0], ans[i-1][1]);
        ans[i][1] = ans[i-1][0] + i * count[i];
    }

    cout << max(ans[100000][0], ans[100000][1]) << endl;
    return 0;
}