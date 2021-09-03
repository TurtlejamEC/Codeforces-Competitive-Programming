#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    set<int> seen;
    for (int i =0; i < 4; i++) {
        int a;
        cin >> a;
        seen.insert(a);
    }

    cout << 4-seen.size();
    return 0;
}