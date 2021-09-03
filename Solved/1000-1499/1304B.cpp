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
    int n, m;
    cin >> n >> m;
    vector<string> choices(n);
    for (int i = 0; i < n; i++) {
        cin >> choices[i];
    }
    vector<bool> paired(n);
    queue<string> l;
    stack<string> r;
    string hi = "";
    for (int i = 0; i < n; i++) {
        string test = choices[i];
        reverse(test.begin(), test.end());
        if (test == choices[i]) {
            if (test.size() > hi.size()) {
                hi = test;
            }
            continue;
        }

        for (int j = i+1; j < n; j++) {
            if (paired[j]) continue;

            if (test == choices[j]) {
                paired[i] = true;
                paired[j] = true;
                l.push(choices[i]);
                r.push(choices[j]);
                break;
            }
        }
    }

    cout << l.size()*m*2 + hi.size() << endl;
    while (!l.empty()) {
        cout << l.front();
        l.pop();
    }
    cout << hi;
    while (!r.empty()) {
        cout << r.top();
        r.pop();
    }
    return 0;
}