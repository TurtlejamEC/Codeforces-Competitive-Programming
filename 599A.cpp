#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d2*2+d3*2, min(d1*2+d3*2, min(d1+d2+d3, d1*2+d2*2)));
    return 0;
}