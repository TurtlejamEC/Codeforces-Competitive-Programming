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
    vector<string> words;
    int start = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (start != -1) {
                words.push_back(s.substr(start, i-start));
            }
            i += 2;
            start = -1;
        } else {
            if (start == -1) {
                start = i;
            }
        }
    }
    if (start != -1) {
        words.push_back(s.substr(start, s.size()-start));
    }

    for (string str: words) {
        cout << str << " ";
    }

    return 0;
}