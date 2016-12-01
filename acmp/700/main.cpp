#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n, v, k;
    cin >> n >> v >> k;
    ll c = v;
    ll s = 0;
    for (int i = 0; i < n; ++i) {
        s += max(c, 0LL);
        c -= k;
    }
    cout << ((c + k > 0) ? "YES" : "NO") << " " << s;
    return 0;
}