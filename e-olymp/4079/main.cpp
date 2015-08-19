#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/4079/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0, q = 0;
    cin >> n >> q;
    vector<int> c(n + 1UL);
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        c[x] = i + 1;
    }
    int k = (int)ceil(log2(n + 1));
    vector<vector<int>> M(n + 1UL, vector<int>(k + 1UL));
    for (int i = 1; i <= n; ++i) {
        M[i][0] = c[i];
    }
    for (int j = 1; j <= k; ++j) {
        for (int i = 1; i + (1 << j) - 1 <= n; ++i) {
            M[i][j] = min(M[i][j - 1], M[i + (1 << (j - 1))][j - 1]);
        }
    }
    for (int i = 0; i < q; ++i) {
        int a = 0, b = 0;
        cin >> a >> b;
        int x = min(a, b), y = max(a, b);
        int t = (int)floor(log2(y - x + 1));
        int answer = min(M[x][t], M[y - (1 << t) + 1][t]);
        cout << answer << endl;
    }
    return 0;
}