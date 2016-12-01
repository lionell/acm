#include <bits/stdc++.h>

using namespace std;

int lcm(int x, int y) {
    return x * y / __gcd(x, y);
}

int solve(int k, int n, int m, int d) {
    int x = k * n * m - (k * n + k * m + n * m);
    if (x <= 0) {
        return -1;
    }
    return lcm(x, k * n * m * d) / x;
}

int main() {
    int k, n, m, d;
    cin >> k >> n >> m >> d;
    cout << solve(k, n, m, d);
    return 0;
}