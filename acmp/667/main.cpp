#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m, int k) {
    if (k <= 2)
        return 0;
    int x = (n + (k - 2 - 1)) / (k - 2);
    m -= 2 * x;
    if (m < 0) {
        return 0;
    }
    int ans = x + m / k;
    int free = (n % (k - 2) > 0) ? k - (n % (k - 2) + 2) : 0;
    ans += m % k > free;
    return ans;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    cout << solve(n, m, k);
    return 0;
}