#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    double res = 0;
    if (p > 0)
        res += p / 100.0;
    if (p < 100)
        res += (100 - p) / 100.0 / n;
    cout.precision(6);
    cout << fixed << 1.0 / res;
    return 0;
}