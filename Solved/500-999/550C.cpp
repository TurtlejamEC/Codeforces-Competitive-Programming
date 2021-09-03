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
#include <climits>
#include <bitset>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '8') {
            cout << "YES" << endl;
            cout << s[i] << endl;
            return 0;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        for (int j = i+1; j < s.size(); j++) {
            int num = (s[i]-'0')*10 + (s[j]-'0');
            if (num % 8 == 0) {
                cout << "YES" << endl;
                cout << num << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < s.size(); i++) {
        for (int j = i+1; j < s.size(); j++) {
            for (int k = j+1; k < s.size(); k++) {
                int num = (s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                if (num % 8 == 0) {
                    cout << "YES" << endl;
                    cout << num << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}