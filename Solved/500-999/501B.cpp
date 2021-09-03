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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> change;
    for (int i = 0;i  < n; i++) {
        string a, b;
        cin >> a >> b;
        auto res = change.find(a);
        if (change.find(a) != change.end()) {
            a = (*res).second;
            change.erase(res);
        }
        change[b] = a;
    }

    cout << change.size() << endl;
    for (auto i: change) {
        cout << i.second << " " << i.first << endl;
    }
    return 0;
}