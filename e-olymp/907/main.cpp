#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-7;

double a[100];

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/907/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int index = -1;
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &a[i]);
        if (index == -1 && a[i] - 2.5 < EPS) {
            index = i;
        }
    }
    if (index != -1) {
        printf("%d %0.2lf", index + 1, a[index]);
    } else printf("Not Found");
    printf("\n");
    return 0;
}