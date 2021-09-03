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
    vector<string> rows = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    char shift;
    cin >> shift;
    string s;
    cin >> s;
    for (char c: s) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < rows[i].size(); j++) {
                if (rows[i][j] == c) {
                    if (shift == 'R') {
                        cout << rows[i][j-1];
                    } else {
                        cout << rows[i][j+1];
                    }
                    break;
                }
            }
        }
    }

    return 0;
}