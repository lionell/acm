#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-7;

double sqr(double x) {
    return x * x;
}

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/4/in.txt", "r", stdin);
#endif
    double x1 = 0.0, y1 = 0.0, r1 = 0.0, x2 = 0.0, y2 = 0.0, r2 = 0.0;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
    if (r2 - r1 < EPS) {
        swap(x1, x2);
        swap(y1, y2);
        swap(r1, r2);
    }
    double d = sqrt(sqr(x1 - x2) + sqr(y1 - y2));
    if (d < EPS && fabs(r1 - r2) < EPS) printf("-1");
    else if (fabs(d - (r1 + r2)) < EPS || fabs(d + r1 - r2) < EPS) printf("1");
    else if (d - (r1 + r2) > EPS || d + r1 - r2 < EPS) printf("0");
    else printf("2");
    printf("\n");
    return 0;
}