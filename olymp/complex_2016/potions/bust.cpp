//
// Created by lionell on 5/1/16.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int MAX_N = 100000;
const double INF = 1e9;

pii a[MAX_N];
int n, k;

double ans = INF;
ll x, y;

void bust(int i, int k) {
    if (i + k > n) {
        return;
    }

    if (k == 0) {
        ans = min(ans, (double) x / y);
        return;
    }

    x += a[i].first;
    y += a[i].second;

    bust(i + 1, k - 1);

    x -= a[i].first;
    y -= a[i].second;

    bust(i + 1, k);
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    bust(0, k);

    cout << ans;

    return 0;
}