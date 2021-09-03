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
#include <deque>

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    vector<int> score(2);
    bool turn = false;
    while (!cards.empty()) {
        if (cards.front() > cards.back()) {
            score[turn] += cards.front();
            cards.pop_front();
        } else {
            score[turn] += cards.back();
            cards.pop_back();
        }
        turn = !turn;
    }
    cout << score[0] << " " << score[1] << endl;
    return 0;
}