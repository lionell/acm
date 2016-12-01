#include <bits/stdc++.h>

using namespace std;

long long sqr(long long a) {
    return (a * a);
}

int main() {
    long long xa = 0, ya = 0, xb = 0, yb = 0;
    cin >> xa >> ya >> xb >> yb;
    if (ya * yb > 0) yb = -yb;
    long long square_distance = sqr(xa - xb) + sqr(ya - yb);
    cout << square_distance << ".";
    for (int i = 0; i < 20; ++i) cout << "0";
    return 0;
}