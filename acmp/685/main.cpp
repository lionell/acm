#include <bits/stdc++.h>

using namespace std;

int a[3];
int b[3];

int main() {
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }
    sort(a, a + 3);
    sort(b, b + 3);
    int s = 0;
    for (int i = 0; i < 3; i++) {
        s += a[i] * b[i];
    }
    printf("%d", s);
    return 0;
}