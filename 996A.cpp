#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0, ans = 0;

    while (current < n) {
        if (n - current >= 100) {
            current += 100;
            ans++;
        } else if (n - current >= 20) {
            current += 20;
            ans++;
        } else if (n - current >= 10) {
            current += 10;
            ans++;
        } else if (n - current >= 5) {
            current += 5;
            ans++;
        } else {
            current++;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}