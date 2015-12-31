//
// Created by lionell on 6/27/15.
//

#include <bits/stdc++.h>

using namespace std;

const int MAX_BALLS = 1000;
const int MOD = 1000000007;
long long BC[MAX_BALLS][MAX_BALLS];
int c[MAX_BALLS];

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_309/in.txt", "r", stdin);
#endif
    for (int i = 0; i < MAX_BALLS; ++i) {
        BC[i][0] = 1;
        for (int j = 1; j <= i; ++j) {
            BC[i][j] = (BC[i - 1][j - 1] + BC[i - 1][j]) % MOD;
        }
    }
    int k = 0;
    scanf("%d", &k);
    for (int i = 0; i < k; ++i) {
        scanf("%d", &c[i]);
    }
    long long result = 1;
    int total = 0;
    for (int i = 0; i < k; ++i) {
        result = (result * BC[total + c[i] - 1][c[i] - 1]) % MOD;
        total += c[i];
    }
    printf("%I64d", result);
    return 0;
}