#include <bits/stdc++.h>

using namespace std;

char a[101][101];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            bool free = a[i][j] == '.';
            if (i > 0)
                free &= a[i - 1][j] == '.';
            if (j > 0)
                free &= a[i][j - 1] == '.';
            if (i < n - 1)
                free &= a[i + 1][j] == '.';
            if (j < m - 1)
                free &= a[i][j + 1] == '.';
            c += free;
        }
    }
    cout << c;
    return 0;
}