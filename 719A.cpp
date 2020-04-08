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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> observation(n);
    for (int i = 0; i < n; i++) {
        cin >> observation[i];
    }
    if (n == 1) {
        if (observation[0] == 0) {
            cout << "UP";
        } else if (observation[0] == 15) {
            cout << "DOWN";
        } else {
            cout << -1;
        }
    }
    else {
        if (observation[n-2] > observation[n-1]) {
            if (observation[n-1] != 0) {
                cout << "DOWN";
            } else {
                cout << "UP";
            }
        } else {
            if (observation[n-1] != 15) {
                cout << "UP";
            } else {
                cout << "DOWN";
            }
        }
    }
    return 0;
}