#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int k = n / m;
    for (int i = 0; i < m - n % m; ++i) {
        cout << k << " ";
    }
    for (int i = 0; i < n % m; ++i) {
        cout << k + 1 << " ";
    }
    return 0;
}