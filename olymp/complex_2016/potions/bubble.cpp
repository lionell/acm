//
// Created by lionell on 5/1/16.
//

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAX_N = 100000;
const double L = 0;
const double R = 1e9;
const double EPS = 1e-4;

pii a[MAX_N];
int n, k;
double lambda;

double calc(pii p) {
    return p.first - lambda * p.second;
}

bool cmp(pii f, pii s) {
    return calc(f) <
           calc(s);
}

bool check() {

    for (int i = 1; i < n; ++i) {
        pii key = a[i];
        int j = i - 1;
        while (j >= 0 && cmp(key, a[j])) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    double sum = 0.0;
    for (int i = 0; i < k; ++i) {
        sum += calc(a[i]);
    }

    return sum <= 0;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    double l = L, r = R;
    while (r - l > EPS) {
        double m = (r + l) / 2;
        lambda = m;
        if (check()) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << fixed << r;
    return 0;
}