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
    int total = n*m;
    bool film = true;
    while (total--) {
        char c;
        cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y') {
            film = false;
            break;
        }
    }
    cout << (film ? "#Black&White" : "#Color");
    return 0;
}