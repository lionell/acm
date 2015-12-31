#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/921/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    double s = 0.0;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        double x = 0.0;
        scanf("%lf", &x);
        if (x < 0.0) {
            s += x;
            c++;
        }
    }
    printf("%d %0.2lf", c, s);
    printf("\n");
    return 0;
}