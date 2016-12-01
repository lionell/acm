#include <bits/stdc++.h>

using namespace std;

int main() {
    int r1;
    int r2;
    int r3;
    scanf("%d %d %d", &r1, &r2, &r3);
    if (r2 + r3 <= r1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}