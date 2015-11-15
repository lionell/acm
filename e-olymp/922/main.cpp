#include <bits/stdc++.h>

using namespace std;

int a[100];

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/922/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int temp = a[n - 1];
    for (int i = n - 1; i >= 1; --i) {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}