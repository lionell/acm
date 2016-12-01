#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>

ii p[1001];

int sqr(int x) {
    return x * x;
}

int dist(int x1, int y1, int x2, int y2) {
    return sqr(x1 - x2) + sqr(y1 - y2);
}

bool check(int xa, int ya, int xb, int yb, int i) {
    return 4 * dist(xa, ya, p[i].first, p[i].second) <= dist(xb, yb, p[i].first, p[i].second);
}

int main() {
    int xa, ya, xb, yb, n;
    cin >> xa >> ya >> xb >> yb >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; ++i) {
        if (check(xa, ya, xb, yb, i)) {
            cout << i + 1;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}