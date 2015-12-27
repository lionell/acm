//
// Created by lionell on 7/9/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/projects/contests/summer_school_2015/first_tour/in.txt");
#endif

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> a(n + 1UL);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<vector<ll> > dp(k + 1UL, vector<ll>(n + 1UL));
    dp[1][1] = a[1];
    for (int i = 2; i <= n; ++i) {
        dp[1][i] = min(dp[1][i - 1], (ll)a[i]);
    }
    for (int i = 2; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            ll minimum = a[j];
            for (int o = j - 1; o >= i - 1; o--) {
                dp[i][j] = max(dp[i][j], dp[i - 1][o] + minimum);
                minimum = min(minimum, (ll)a[o]);
            }
        }
    }
    cout << dp[k][n];
    return 0;
}