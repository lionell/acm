#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-7;

double a[4];

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/929/in.txt", "r", stdin);
#endif
    scanf("%lf %lf %lf %lf", &a[0], &a[1], &a[2], &a[3]);
    sort(a, a + 4);
    printf((fabs(a[0] - a[1]) < EPS && fabs(a[2] - a[3]) < EPS) ? "YES" : "NO");
    printf("\n");
    return 0;
}