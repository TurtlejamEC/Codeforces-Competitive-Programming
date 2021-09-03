#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> gar(3);

    cin >> gar[0] >> gar[1] >> gar[2];

    sort(gar.begin(), gar.end());

    if (gar[0] == 1 ||
        gar[0] == 2 && gar[1] == 2 ||
        gar[0] == 2 && gar[1] == 4 && gar[2] == 4 ||
        gar[0] == 3 && gar[1] == 3 && gar[2] == 3)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}