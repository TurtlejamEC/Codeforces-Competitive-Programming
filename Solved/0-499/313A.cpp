#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;
    if (n[0] == '-') {
        if (n[n.size() - 1] - '0' > n[n.size() - 2] - '0') {
            cout << stoi(n.substr(0, n.size() - 1));
        } else {
            cout << stoi(n.substr(0, n.size() - 2) + n[n.size()-1]);
        }
    } else {
        cout << n;
    }
    return 0;
}