#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        set<int> seen;

        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            seen.insert(a);
        }
        cout << seen.size() << endl;
    }
    return 0;
}