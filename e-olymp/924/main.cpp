#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    double S = 0.0, R = 0.0;
    scanf("%lf %lf", &S, &R);
    double r = sqrt(R * R - S / M_PI);
    printf("%0.2lf", r);
    printf("\n");
    return 0;
}