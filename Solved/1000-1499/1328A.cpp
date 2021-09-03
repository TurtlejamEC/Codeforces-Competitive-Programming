#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a,b;
        cin >> a >> b;
        cout << ((a % b) ? b - (a % b) : 0) << endl;
    }
    return 0;
}