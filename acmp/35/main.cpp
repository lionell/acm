#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define endl '\n'

ll eval(int n, int m) {
    return 19LL * m + (n + 239LL) * (n + 366LL) / 2LL;
}

int main() {
    int k;
    cin >> k;
    vector<ll> a(k + 0UL);
    for (int i = 0; i < k; i++) {
        int n;
        int m;
        cin >> n >> m;
        a[i] = eval(n, m);
    }
    for (ll d : a) {
        cout << d << endl;
    }
    return 0;
}