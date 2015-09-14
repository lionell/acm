#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int answer = (n % 10) * ((n / 10) % 10) * ((n / 10) / 10);
    printf("%d", answer);
    printf("\n");
    return 0;
}