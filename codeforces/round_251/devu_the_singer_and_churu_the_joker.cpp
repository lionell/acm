//
// Created by lionell on 5/9/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_251/in.txt", "r", stdin);
#endif
    int n = 0, d = 0;
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; ++i) {
        int t = 0;
        cin >> t;
        d -= t;
    }
    d -= 10 * (n - 1);
    if (d >= 0) {
        int jokes = (n - 1) * 2 + d / 5;
        printf("%d", jokes);
    } else printf("-1");
    return 0;
}