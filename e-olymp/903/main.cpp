#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int last = n % 10; n /= 10;
    n /= 10;
    int first = n;
    if (first > last) printf("%d", first);
    else if (last > first) printf("%d", last);
    else printf("=");
    printf("\n");
    return 0;
}