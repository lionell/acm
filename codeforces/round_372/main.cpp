#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll x = 2;
    for (int i = 1; i <= n; i++) {
        cout << 1ll * i * (i + 1) * (i + 1) - x / i << endl;
        x = 1ll * i * (i + 1);
    }
    return 0;
}