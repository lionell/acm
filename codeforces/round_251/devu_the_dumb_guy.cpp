//
// Created by lionell on 5/9/15.
//

#include <bits/stdc++.h>

using namespace std;

int c[100001];

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_251/in.txt", "r", stdin);
#endif
    int n = 0;
    long long x = 0;
    scanf("%d %lld", &n, &x);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &c[i]);
    }
    sort(c, c + n);
    long long answer = 0;
    for (int i = 0; i < n; ++i) {
        answer += x * c[i];
        if (x > 1) x--;
    }
    printf("%lld", answer);
    return 0;
}