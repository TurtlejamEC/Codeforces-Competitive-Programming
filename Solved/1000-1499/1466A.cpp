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
#include <numeric>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set< int > areas;
        vector<int> trees(n);
        for (int i = 0; i < n; i++) {
            cin >> trees[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                areas.insert(trees[j]-trees[i]);
            }
        }
        cout << areas.size() << endl;
    }
    return 0;
}