#include <bits/stdc++.h>

using namespace std;

int a[3];

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/915/in.txt", "r", stdin);
#endif
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, a + 3);
    printf((a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) ? "YES" : "NO");
    printf("\n");
    return 0;
}