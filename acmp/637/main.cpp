#include <bits/stdc++.h>

using namespace std;

int a[10001];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += min(a[i], k);
    }
    cout << s;
    return 0;
}