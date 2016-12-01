#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int k = 0; k < m; ++k) {
        int i, j;
        cin >> i >> j;
        for (int h = i - 1; h < j; ++h) {
            cout << a[h] << " ";
        }
        cout << endl;
    }
    return 0;
}