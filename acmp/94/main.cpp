#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if (n < m) {
        if (k < n) {
            cout << 1 + (m - n + n - k - 1) / (n - k);
        } else {
            cout << "NO";
        }
    } else {
        cout << 1;
    }
    return 0;
}