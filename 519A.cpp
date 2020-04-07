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

int weight(char c) {
    if (c < 'a') c += 'a' - 'A';
    if (c == 'q') return 9;
    else if (c == 'r') return 5;
    else if (c == 'b') return 3;
    else if (c == 'n') return 3;
    else if (c == 'p') return 1;
    else return 0;
}

int main() {
    int black = 0, white = 0;
    for (int i = 0; i < 8; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '.') continue;
            else if (s[j] < 'a') {
                black += weight(s[j]);
            } else {
                white += weight(s[j]);
            }
        }
    }

    if (black == white) {
        cout << "Draw";
    } else if (black > white) {
        cout << "White";
    } else {
        cout << "Black";
    }
    return 0;
}