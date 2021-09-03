#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    vector<int> letters(26);
    for (int i = 0; i < a.size(); i++) {
        letters[a[i] - 'A']++;
    }

    for (int i = 0; i < b.size(); i++) {
        letters[b[i] - 'A']++;
    }

    for (int i = 0; i < c.size(); i++) {
        letters[c[i] - 'A']--;
    }

    bool possible = true;
    for (int i: letters) {
        possible &= (i == 0);
    }

    cout << (possible ? "YES" : "NO");

    return 0;
}