#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

char m[502][502];
ll dp[502][502];

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            cin >> m[i][j];
        }
    }
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            if (i > 1) {
                dp[i][j] += dp[i - 1][j];
                if (m[i][j] == '.' && m[i - 1][j] == '.')
                    dp[i][j]++;
            }
            if (j > 1) {
                dp[i][j] += dp[i][j - 1];
                if (m[i][j] == '.' && m[i][j - 1] == '.')
                    dp[i][j]++;
            }
            if (i > 1 && j > 1) {
                dp[i][j] -= dp[i - 1][j - 1];
            }
        }
    }
    int q;
    cin >> q;
    for (int k = 0; k < q; ++k) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        ll ans = dp[r2][c2] - dp[r1 - 1][c2] - dp[r2][c1 - 1] + dp[r1 - 1][c1 - 1];
        for (int i = r2; i >= r1; --i) {
            if (m[i][c1 - 1] == '.' && m[i][c1] == '.')
                ans--;
        }
        for (int i = c2; i >= c1; --i) {
            if (m[r1 - 1][i] == '.' && m[r1][i] == '.')
                ans--;
        }
        cout << ans << endl;
    }
    return 0;
}