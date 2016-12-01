#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n + 0UL);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    reverse(begin(a), end(a));
    for (int x : a) {
        printf("%d ", x);
    }
    return 0;
}