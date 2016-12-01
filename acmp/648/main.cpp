#include <bits/stdc++.h>

using namespace std;

int a[100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int balance = 0;
    for (int i = 0; i < n; ++i) {
        balance += a[i] * (i < n / 2 ? -1 : 1);
    }
    cout << balance;
    return 0;
}