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
    string s;
    cin >> s;
    int step = 0;
    for (char c: s) {
        if (step == 0 && c == 'h' ||
        step == 1 && c == 'e' ||
        step == 2 && c == 'l' ||
        step == 3 && c == 'l' ||
        step == 4 && c == 'o') {
            step++;
        }
    }

    cout << (step == 5 ? "YES" : "NO");
    return 0;
}