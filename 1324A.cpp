#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        int a;
        cin >> a;

        int remainder = a % 2;

        bool ans = true;
        for (int i = 1; i < N; i++) {
            cin >> a;
            if (a % 2 != remainder) ans = false;
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}