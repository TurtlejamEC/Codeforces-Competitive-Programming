#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int hp;
    cin >> hp;

    if (hp % 4 == 0) {
        cout << "1 A" << endl;
    } else if (hp % 4 == 1) {
        cout << "0 A" << endl;
    } else if (hp % 4 == 2) {
        cout << "1 B" << endl;
    } else if (hp % 4 == 3) {
        cout << "2 A" << endl;
    }

    return 0;
}