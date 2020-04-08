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
    int ans = 0;
    vector<int> notes(n);
    for (int i = 0; i < n; i++) {
        cin >> notes[i];
        if (notes[i] == 1) {
            ans = -1;
        }
    }

    if (ans == -1) {
        cout << -1;
    } else {
        for (int i = 1; ; i++) {
            bool found = false;
            for (int j : notes) {
                if (i % j != 0) {
                    found = true;
                    break;
                }
            }

            if (found) {
                cout << i;
                break;
            }
        }
    }
    return 0;
}