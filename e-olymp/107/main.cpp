#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int answer = (n / 100) * 100; n %= 100;
    if (n > 66) {
        answer += 100;
        n = 0;
    }
    answer += (n / 20) * 30; n %= 20;
    if (n > 15) {
        answer += 30;
        n = 0;
    }
    answer += n * 2;
    printf("%d", answer);
    printf("\n");
    return 0;
}