#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int n = 0, p = 0, q = 0, k = 0;
    scanf("%d %d %d %d", &n, &p, &q, &k);
    int per_porch = n / p;
    int per_floor = n / p / q;
    int porch = (k - 1) / per_porch + 1;
    k = (k - 1) % per_porch;
    int floor = k / per_floor + 1;
    printf("%d %d", porch, floor);
    printf("\n");
    return 0;
}