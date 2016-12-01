#include <bits/stdc++.h>

using namespace std;

int a[101];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = -1;
    int j = -1;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x * a[i] > m) {
            j = i;
            m = x * a[i];
        }
    }
    cout << j + 1;
    return 0;
}