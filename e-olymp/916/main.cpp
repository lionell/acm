#include <bits/stdc++.h>

using namespace std;

bool used[101];

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/916/in.txt", "r", stdin);
#endif
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    for (int i = a; i <= b; ++i) {
        for (int j = c; j <= d; ++j) {
            used[i * j] = true;
        }
    }
    int answer = 0;
    for (int i = 1; i <= 100; ++i) {
        answer += used[i];
    }
    printf("%d", answer);
    printf("\n");
    return 0;
}