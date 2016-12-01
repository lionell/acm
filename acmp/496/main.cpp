#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 1; i < n - 1; ++i) {
        sum = max(sum, a[i - 1] + a[i] + a[i + 1]);
    }
    sum = max(sum, a[n - 2] + a[n - 1] + a[0]);
    sum = max(sum, a[n - 1] + a[0] + a[1]);
    cout << sum;
    return 0;
}