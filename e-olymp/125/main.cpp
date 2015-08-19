#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int h1 = 0, m1 = 0, s1 = 0, h2 = 0, m2 = 0, s2 = 0;
    scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
    int time1 = h1 * 3600 + m1 * 60 + s1;
    int time2 = h2 * 3600 + m2 * 60 + s2;
    int diff = time2 - time1;
    int h = diff / 3600; diff %= 3600;
    int m = diff / 60; diff %= 60;
    int s = diff;
    printf("%d %d %d", h, m, s);
    printf("\n");
    return 0;
}