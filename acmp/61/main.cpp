#include <bits/stdc++.h>

using namespace std;

int main() {
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < 4; i++) {
        int a;
        int b;
        scanf("%d %d", &a, &b);
        s1 += a;
        s2 += b;
    }
    if (s1 > s2) {
        printf("1");
    } else if (s1 < s2) {
        printf("2");
    } else {
        printf("DRAW");
    }
    return 0;
}