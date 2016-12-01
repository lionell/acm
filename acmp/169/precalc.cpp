#include <bits/stdc++.h>

using namespace std;

int p[38][38];

void init() {
    p[1][1] = 1;
    for (int j = 1; j <= 37; ++j) {
        for (int i = 1; i <= 37; ++i) {
            if (i == 1 && j == 1) continue;
            p[i][j] = p[i - 1][j - 1] + p[i + 1][j - 1];
        }
    }
}

int main() {
    init();
    int n, k;
    cin >> n >> k;
    cout << p[n][k];
    return 0;
}