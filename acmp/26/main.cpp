#include <bits/stdc++.h>

using namespace std;

int sqr(int x) {
    return x * x;
}

double dist(int x1, int y1, int x2, int y2) {
    return sqrt(sqr(x1 - x2) + sqr(y1 - y2));
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if (r1 > r2) {
        swap(x1, x2);
        swap(y1, y2);
        swap(r1, r2);
    }
    double d = dist(x1, y1, x2, y2);
    if (d <= r1 + r2 && d + r1 >= r2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}