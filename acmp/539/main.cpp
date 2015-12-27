#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("0");
    } else {
        printf("%d", n % 2 == 0 ? n / 2 : n);
    }
    return 0;
}