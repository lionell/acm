#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/914/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    double maximum = -101;
    for (int i = 0; i < n; ++i) {
        double x = 0.0;
        scanf("%lf", &x);
        if (x > maximum) maximum = x;
    }
    printf("%0.2lf", fabs(maximum));
    printf("\n");
    return 0;
}