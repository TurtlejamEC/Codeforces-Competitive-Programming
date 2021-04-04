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

struct Element {
    string s;
    int id;
    int cost;
};

bool elementSorter(Element& l, Element& r) {
    if (l.s != r.s) {
        return l.s < r.s;
    } else if (l.id/2 != r.id/2) {
        return l.id < r.id;
    } else {
        return l.cost > r.cost;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    vector<Element> elements(2*n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        elements[2*i] = {s, 2*i, 0};
        reverse(s.begin(), s.end());
        elements[2*i+1] = {s, 2*i+1, cost[i]};
    }
    sort(elements.begin(), elements.end(), elementSorter);
    vector< vector< pair<int, int> > > graph(2*n);
    vector< vector<int> > seen(n);
    for (int i = 0; i < 2*n; i++) {
        if (elements[i].id/2 > 0) {
            for (int j: seen[elements[i].id / 2 - 1]) {
                graph[j].push_back({elements[i].id, elements[i].cost});
            }
        }

        seen[elements[i].id/2].push_back(elements[i].id);
    }


    priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > pq;
    vector<ll> dist(2*n, LLONG_MAX);
    dist[0] = 0;
    dist[1] = cost[1/2];
    pq.push({dist[0], 0});
    pq.push({dist[1], 1});
    while (!pq.empty()) {
        pair<ll, int> current = pq.top();
        pq.pop();
        if (current.first != dist[current.second]) continue;
        for (pair<int, int> i: graph[current.second]) {
            if (current.first + i.second < dist[i.first]) {
                dist[i.first] = current.first + i.second;
                pq.push({dist[i.first], i.first});
            }
        }
    }

    cout << (dist[2*n-1] == LLONG_MAX && dist[2*n-2] == LLONG_MAX ? -1 : min(dist[2*n-1],dist[2*n-2])) << '\n';
    return 0;
}