#include <bits/stdc++.h>

using namespace std;

int c[2];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        c[x]++;
    }
    sort(c, c + 2, less<int>());
    printf("%d", c[0]);
    return 0;
}