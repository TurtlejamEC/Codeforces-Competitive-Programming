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

int convertToNumber(string s) {
    int result = 0;
    int power = 1;
    for (int i = s.size()-1; i >= 0; i--) {
        result += (s[i]-'A'+1) * power;
        power *= 26;
    }
    return result;
}

string convertToString(int n) {
    string result = "";
    while (n) {
        if (n%26) {
            result += 'A'+(n%26)-1;
            n/=26;
        } else {
            result += 'Z';
            n/=26;
            n-=1;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string coords;
        cin >> coords;
        vector<string> broken;
        bool letters = true;
        string building = "";
        for (char c: coords) {
            if (letters && !isalpha(c) || !letters && isalpha(c)) {
                letters = !letters;
                broken.push_back(building);
                building = "";
            }
            building += c;
        }
        broken.push_back(building);
        if (broken.size() == 2) {
            cout << "R" << stoi(broken[1]) << "C" << convertToNumber(broken[0]) << endl;
        } else {
            cout << convertToString(stoi(broken[3])) << stoi(broken[1]) << endl;
        }
    }
    return 0;
}