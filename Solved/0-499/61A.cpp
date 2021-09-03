#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        cout << (a[i] == b[i] ? 0 : 1);
    }

    return 0;
}