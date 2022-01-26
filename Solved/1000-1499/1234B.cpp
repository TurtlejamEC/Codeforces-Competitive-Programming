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

    int n, k;
    cin >> n >> k;
    set<int> displaying;
    deque<int> q;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (displaying.find(a) == displaying.end()) {
            if (q.size() == k) {
                displaying.erase(q.back());
                q.pop_back();
                q.push_front(a);
                displaying.insert(a);
            } else {
                q.push_front(a);
                displaying.insert(a);
            }
        }
    }
    cout << displaying.size() << '\n';
    for (int i: q) {
        cout << i << ' ';
    }
    return 0;
}