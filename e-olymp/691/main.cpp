#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/691/in.txt", "r", stdin);
#endif
    int n = 0, m = 0, a1 = 0;
    scanf("%d %d %d", &n, &m, &a1);
    int u1 = 0, v1 = 0;
    scanf("%d %d", &u1, &v1);
    vector<int> a(n + 1UL);
    a[1] = a1;
    for (int i = 2; i <= n; ++i) {
        a[i] = (23 * a[i - 1] + 21563) % 16714589;
    }
    int k = (int)ceil(log2(n));
    vector<vector<int> > M(n + 1UL, vector<int>(k + 1UL));
    for (int i = 1; i <= n; ++i) {
        M[i][0] = a[i];
    }
    for (int j = 1; j <= k; ++j) {
        for (int i = 1; i + (1 << j) - 1 <= n; ++i) {
            M[i][j] = min(M[i][j - 1], M[i + (1 << (j - 1))][j - 1]);
        }
    }
    int u = u1, v = v1;
    int i = 1;
    while (i < m) {
        int x = min(u, v), y = max(u, v);
        int t = (int)floor(log2(y - x  + 1));
        int answer = min(M[x][t], M[y - (1 << t) + 1][t]);
        u = ((17 * u + 751 + answer + 2 * i) % n) + 1;
        v = ((13 * v + 593 + answer + 5 * i) % n) + 1;
        ++i;
    }
    int x = min(u, v), y = max(u, v);
    int t = (int)floor(log2(y - x  + 1));
    int answer = min(M[x][t], M[y - (1 << t) + 1][t]);
    printf("%d %d %d", u, v, answer);
    printf("\n");
    return 0;
}