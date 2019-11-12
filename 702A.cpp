#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, count = 0, previous = -1;
    int a;
    while (n--) {
        cin >> a;
        if (previous == -1) {
            count = 1;
        } else if (previous < a) {
            count++;
        } else {
            count = 1;
        }

        ans = max(ans, count);
        previous = a;
    }
    cout << ans << endl;
    return 0;
}