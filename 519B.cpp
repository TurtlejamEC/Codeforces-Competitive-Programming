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
    vector<int> first(n);
    for (int i = 0; i < n; i++) {
        cin >> first[i];
    }
    vector<int> second(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> second[i];
    }
    vector<int> third(n-2);
    for (int i = 0; i < n-2; i++) {
        cin >> third[i];
    }
    sort(first.begin(),first.end());
    sort(second.begin(), second.end());
    sort(third.begin(), third.end());
    bool printed = false;
    for (int i = 0; i < n-1; i++) {
        if (first[i] != second[i]) {
            cout << first[i] << endl;
            printed = true;
            break;
        }
    }
    if (!printed) {
        cout << first[n-1] << endl;
    }
    printed = false;
    for (int i = 0; i < n-2; i++) {
        if (third[i] != second[i]) {
            cout << second[i] << endl;
            printed = true;
            break;
        }
    }
    if (!printed) {
        cout << second[n-2] << endl;
    }
    return 0;
}