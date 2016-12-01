#include <bits/stdc++.h>

using namespace std;

int sqr(int x) {
     return x * x;
}

int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << sqrt(sqr(x1 - x2) + sqr(y1 - y2));
    return 0;
}