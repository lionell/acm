//
// Created by lionell on 5/6/15.
// Verdict: Accepted
//

#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long ll;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_301/in.txt");
#endif

ld dp[101][101][101];

int main() {
    int r = 0, s = 0, p = 0;
    cin >> r >> s >> p;
    dp[r][s][p] = 1;
    for (int i = r; i >= 0; --i) {
        for (int j = s; j >= 0; --j) {
            for (int k = p; k >= 0; --k) {
                if (i == 0 && j == 0) continue;
                if (i == 0 && k == 0) continue;
                if (j == 0 && k == 0) continue;
                ll ways_r = i * k;
                ll ways_s = i * j;
                ll ways_p = j * k;
                ll total_ways = ways_r + ways_s + ways_p;
                if (i > 0) dp[i - 1][j][k] += dp[i][j][k] * ways_r / total_ways;
                if (j > 0) dp[i][j - 1][k] += dp[i][j][k] * ways_s / total_ways;
                if (k > 0) dp[i][j][k - 1] += dp[i][j][k] * ways_p / total_ways;
            }
        }
    }
    ld answer_r = 0.0, answer_s = 0.0, answer_p = 0.0;
    for (int i = 1; i <= r; ++i) answer_r += dp[i][0][0];
    for (int i = 1; i <= s; ++i) answer_s += dp[0][i][0];
    for (int i = 1; i <= p; ++i) answer_p += dp[0][0][i];
    cout.precision(12);
    cout << fixed << answer_r << " " << fixed << answer_s << " " << fixed << answer_p;
    return 0;
}