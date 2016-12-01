#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/917/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    double minimum = 101;
    for (int i = 0; i < n; ++i) {
        double x = 0.0;
        scanf("%lf", &x);
        if (x < minimum) minimum = x;
    }
    printf("%0.2lf", 2 * minimum);
    printf("\n");
    return 0;
}