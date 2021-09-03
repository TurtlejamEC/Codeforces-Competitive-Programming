#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    vector<int> every(4);
    for (int i = 0; i < 4; i++) {
        cin >> every[i];
    }

    int d;
    cin >> d;
    int count = 0;
    for (int i = 1; i <= d; i++) {
        for (int j = 0; j < 4; j++) {
            if (!(i % every[j])) {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}