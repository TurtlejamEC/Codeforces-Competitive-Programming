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
    vector< vector<int> > prefix(2, vector<int>(n+1));
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        prefix[a][i+1] = prefix[a][i] + 1;
        prefix[1-a][i+1] = prefix[1-a][i];
    }
    int hi = INT_MIN;
    for (int l = 0; l <= n; l++) {
        for (int r = l+1; r <= n; r++) {
            hi = max(hi, prefix[0][r] - prefix[0][l] - (prefix[1][r] - prefix[1][l]));
        }
    }
    cout << prefix[1][n] + hi;
//    int count1 = 0;
//    int bestSum = -100;
//    int currentSum = 0;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//        if (a) {
//            count1++;
//        }
//        int change = (a ? -1 : 1);
//        currentSum = max(change, currentSum + change);
//        bestSum = max(bestSum, currentSum);
//    }
//    cout << count1+bestSum;
    return 0;
}