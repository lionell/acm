//
// Created by lionell on 6/30/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_311/in.txt", "r", stdin);
#endif
    int n = 0, w = 0;
    scanf("%d %d", &n, &w);
    int *a = new int[2 * n]();
    for (int i = 0; i < 2 * n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + 2 * n);
    double water = 3.0 * (double)a[0] * (double)n;
    water = min(water, 3.0 * (double)a[n] * (double)n / 2.0);
    water = min(water, (double)w);
    printf("%0.6lf", water);
    delete[] a;
    return 0;
}