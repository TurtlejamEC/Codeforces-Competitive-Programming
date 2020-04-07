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
    bool dangerous = false;
    int streak = 0;
    char prev = '2';
    for (char c: s) {
        if (c == prev) {
            streak++;
        } else {
            streak = 1;
        }
        prev = c;
        if (streak == 7) {
            dangerous = true;
            break;
        }
    }

    cout << (dangerous ? "YES" : "NO");
    return 0;
}