#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/918/in.txt", "r", stdin);
#endif
    double x = 0.0, y = 0.0;
    scanf("%lf %lf", &x, &y);
    if (x > 0.0 && y > 0.0) printf("1");
    else if (x < 0.0 && y > 0.0) printf("2");
    else if (x < 0.0 && y < 0.0) printf("3");
    else if (x > 0.0 && y < 0.0) printf("4");
    else printf("0");
    printf("\n");
    return 0;
}