#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/928/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int minimum = 101;
    int maximum = -101;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        scanf("%d", &x);
        if (x < minimum) minimum = x;
        if (x > maximum) maximum = x;
    }
    printf("%d", minimum + maximum);
    printf("\n");
    return 0;
}