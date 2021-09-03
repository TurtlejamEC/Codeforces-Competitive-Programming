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
    int n, m, k;
    cin >> n >> m >> k;
    vector< bitset<20> > armies(m+1);
    for (int i = 0; i < m + 1; i++) {
        int a;
        cin >> a;
        armies[i] = bitset<20>(a);
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int diff = 0;
        bool possibleFriend = true;

        for (int j = 0; j < 20; j++) {
            diff += armies[i][j] != armies[m][j];
            if (diff > k) {
                possibleFriend = false;
                break;
            }
        }
        
        ans += possibleFriend;
    }
    cout << ans << endl;
    return 0;
}