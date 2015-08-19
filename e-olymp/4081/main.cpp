#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/4081/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    while (cin >> n) {
        if (n == 0) break;
        int q = 0;
        cin >> q;
        vector<int> a(n + 0UL), b(n + 0UL);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i > 0 && a[i - 1] == a[i])
                b[i] = b[i - 1] + 1;
            else
                b[i] = 1;
        }
        vector<int> last(n + 0UL);
        last[n - 1] = (b[n - 1] == 1) ? (n - 1) : -1;
        for (int i = n - 2; i >= 0; --i) {
            if (b[i] == 1)
                last[i] = i;
            else
                last[i] = last[i + 1];
        }
        int k = (int)floor(log2(n));
        vector<vector<int> > M(n + 0UL, vector<int>(k + 1UL));
        for (int i = 0; i < n; ++i) {
            M[i][0] = b[i];
        }
        for (int j = 1; j <= k; ++j) {
            for (int i = 0; i + (1 << j) - 1 < n; ++i) {
                M[i][j] = max(M[i][j - 1], M[i + (1 << (j - 1))][j - 1]);
            }
        }
        for (int i = 0; i < q; ++i) {
            int l = 0, r = 0;
            cin >> l >> r;
            l -= 1;
            r -= 1;
            int answer = 0;
            if (last[l] != -1 && last[l] <= r) {
                int t = (int)floor(log2(r - last[l] + 1));
                answer = max(last[l] - l, max(M[last[l]][t], M[r - (1 << t) + 1][t]));
            } else
                answer = r - l + 1;
            cout << answer << endl;
        }
    }
    return 0;
}