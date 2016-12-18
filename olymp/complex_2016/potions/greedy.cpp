//
// Created by lionell on 5/1/16.
//

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

const int MAX_N = 100000;

pii a[MAX_N];
int n, k;

bool cmp(pii f, pii s) {
    ll x = (ll) f.first * s.second;
    ll y = (ll) s.first * f.second;
    return x < y || x == y && f.first < s.first;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n, cmp);

    double nom = 0.0, den = 0.0;
    for (int i = 0; i < k; ++i) {
        nom += a[i].first;
        den += a[i].second;
    }

    cout << nom / den;
    return 0;
}