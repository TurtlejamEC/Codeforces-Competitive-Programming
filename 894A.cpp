#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    vector<char> qaq;
    cin >> s;
    for (char i: s) {
        if (i == 'Q' or i == 'A')
            qaq.push_back(i);
    }

    int ans = 0;
    for (int i = 0; i < qaq.size(); i++) {
        if (qaq[i] != 'Q') continue;

        for (int j = i + 1; j < qaq.size(); j++) {
            if (qaq[j] != 'A') continue;

            for (int k = j + 1; k < qaq.size(); k++) {
                if (qaq[k] != 'Q') continue;

                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}