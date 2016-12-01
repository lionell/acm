#include <bits/stdc++.h>

using namespace std;

char a[101][101];
int b[101][101];

bool can(char c, int i) {
    if (c == 'R') {
        return i >= 4;
    } else if (c == 'G') {
        return i == 2 || i == 3 || i == 6 || i == 7;
    } else if (c == 'B') {
        return i % 2 == 1;
    }
    return true;
}

bool check(int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!can(a[i][j], b[i][j])) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }
    cout << (check(n, m) ? "YES" : "NO");
    return 0;
}