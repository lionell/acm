#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int sqr(int x) {
    return x * x;
}

double dist(ii a, ii b) {
    return sqrt(sqr(a.first - b.first) + sqr(a.second - b.second));
}

int main() {
    int n;
    cin >> n;
    ii a = {0, 0};
    double d = 0.0;
    for (int i = 0; i < n; ++i) {
        ii b;
        cin >> b.first >> b.second;
        d += dist(a, b);
        a = b;
    }
    d += dist(a, {0, 0});
    cout << fixed << d;
    return 0;
}