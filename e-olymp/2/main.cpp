#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/2/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    if (n > 0) printf("%d", (int)floor(log10(n)) + 1);
    else printf("1");
    printf("\n");
    return 0;
}