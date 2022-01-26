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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    int candy = 1;
    vector<int> ansVec;
    while (n >= candy) {
        ans++;
        ansVec.push_back(candy);
        n -= candy;
        candy++;
    }
    ansVec[ansVec.size() - 1] += n;
    cout << ansVec.size() << '\n';
    for (int i: ansVec) {
        cout << i << " ";
    }
    return 0;
}