#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/5472/in.txt");
#endif

const unsigned long long mod = (1LL << 32);

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0, m = 0, a = 0, b = 0;
    while (cin >> n >> m >> a >> b) {
        if (n == 0 && m == 0 & a == 0 && b == 0) break;
        vector<unsigned long long> c(n + 0UL);
        vector<int> l(m + 0UL), r(m + 0UL);
        {
            int j = 1;
            while (j <= n) {
                c[j - 1] = (a * j * 1ULL + b) % mod;
                ++j;
            }
            for (int i = 0; i < m; ++i) {
                l[i] = (int)(((a * j * 1ULL + b) % mod) % n);
                r[i] = (int)(((a * (j + 1) * 1ULL + b) % mod) % n);
                j += 2;
            }
        }
        int k = (int)floor(log2(n));
        vector<vector<unsigned long long> > M(n + 0UL, vector<unsigned long long>(k + 1UL));
        for (int i = 0; i < n; ++i) {
            M[i][0] = c[i];
        }
        for (int j = 1; j <= k; ++j) {
            for (int i = 0; i + (1 << j) - 1 < n; ++i) {
                M[i][j] = min(M[i][j - 1], M[i + (1 << (j - 1))][j - 1]);
            }
        }
        unsigned long long sum = 0;
        for (int i = 0; i < m; ++i) {
            int x = min(l[i], r[i]), y = max(l[i], r[i]);
            int t = (int)floor(log2(y - x + 1));
            unsigned long long answer = min(M[x][t], M[y - (1 << t) + 1][t]);
            sum += answer;
        }
        cout << sum << endl;
    }
    return 0;
}