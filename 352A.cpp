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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    int count0 = 0, count5 = 0;
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
        if (cards[i] == 0) {
            count0++;
        } else {
            count5++;
        }
    }

    if (count0 == 0) {
        cout << -1;
    } else {
        if (count5 < 9) {
            cout << 0;
        } else {
            for (int i = 0; i < count5/9; i++) {
                cout << "555555555";
            }
            string s(count0, '0');
            cout << s;
        }
    }

    return 0;
}