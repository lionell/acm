#include <bits/stdc++.h>

using namespace std;

int a[101];

int main() {
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0;
    while (s >= 0 && i < n) {
        s -= a[i++];
    }
    cout << (s >= 0 ? i : i - 1);
    return 0;
}