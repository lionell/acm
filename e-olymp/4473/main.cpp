#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/4473/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    vector<int> a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int k = (int)floor(log2(n));
    vector<vector<int> > M(n + 0UL, vector<int>(k + 1UL));
    for (int i = 0; i < n; ++i) {
        M[i][0] = a[i];
    }
    for (int j = 1; j <= k; ++j) {
        for (int i = 0; i + (1 << j) - 1 < n; ++i) {
            M[i][j] = max(M[i][j - 1], M[i + (1 << (j - 1))][j - 1]);
        }
    }
    int q = 0;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int l = 0, r = 0;
        cin >> l >> r;
        int x = min(l - 1, r - 1), y = max(l - 1, r - 1);
        int t = (int)floor(log2(y - x + 1));
        cout << max(M[x][t], M[y - (1 << t) + 1][t]) << endl;
    }
    return 0;
}