#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
    if (n <= 0)
        return false;
    while (n > 1) {
        if (n % 2 == 1) {
            return false;
        }
        n /= 2;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", check(n) ? "YES" : "NO");
    return 0;
}