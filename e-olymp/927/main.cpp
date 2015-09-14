#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-7;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/927/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        int a = 0;
        double b = 0.0;
        scanf("%d %lf", &a, &b);
        if (b - 50.0 < -EPS) answer += a;
    }
    printf("%d", answer);
    printf("\n");
    return 0;
}