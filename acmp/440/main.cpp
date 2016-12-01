#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int sqr(int x) {
    return x * x;
}

int dist(ii a, ii b) {
    return sqr(a.first - b.first) + sqr(a.second - b.second);
}

int main() {
    set<ii> targets = {{0, 0}, {25, 0}, {50, 0}, {75, 0}, {100, 0}};
    int count = 0;
    for (int i = 0; i < 5; ++i) {
        ii a;
        cin >> a.first >> a.second;
        auto where = find_if(begin(targets), end(targets),
                             [a](ii b) -> bool {return dist(a, b) <= 100;});
        if (where != end(targets)) {
            targets.erase(where);
            count++;
        }
    }
    cout << count;
    return 0;
}