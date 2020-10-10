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
    vector<int> children(n+1);
    vector<int> parent(n+1);
    for (int i = 2; i <= n; i++) {
        int a;
        cin >> a;
        parent[i] = a;
        children[a]++;
    }

    bool answer = true;
    for (int i = 1; i <= n; i++) {
        if (children[i]) {
            int leafCount = 0;
            for (int j = 1; j <= n; j++) {
                if (parent[j] == i && !children[j]) {
                    leafCount++;
                }
            }

            if (leafCount < 3) {
                answer = false;
                break;
            }
        }
    }

    cout << (answer ? "Yes" : "No");
    return 0;
}