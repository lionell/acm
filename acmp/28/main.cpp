#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x1 == x2) {
        cout << 2 * x1 - x3 << " " << y3;
    } else {
        cout << x3 << " " << 2 * y1 - y3;
    }
    return 0;
}