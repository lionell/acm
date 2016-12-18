//
// Created by lionell on 5/2/16.
//

#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1000001;

int dp[MAX_N];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        dp[x] = -1;
    }

    for (int i = 1; i <= n; ++i) {
        if (dp[i] == -1) {
            continue;
        }

        dp[i] = dp[i - 1];

        if (i - 3 >= 0 && dp[i - 3] != -1 && dp[i - 2] != -1) {
            dp[i] = max(dp[i], dp[i - 3] + (dp[i - 1] != -1));
        }

        if (i - 4 >= 0 && dp[i - 4] != -1 && dp[i - 3] != -1) {
            dp[i] = max(dp[i], dp[i - 4] + (dp[i - 1] != -1) + (dp[i - 2] != -1));
        }
    }

    cout << dp[n];
    return 0;
}