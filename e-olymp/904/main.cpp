#include <bits/stdc++.h>

using namespace std;

int a[100];

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/904/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] >= 0) a[i] += 2;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}