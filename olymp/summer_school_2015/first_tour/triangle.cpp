//
// Created by lionell on 7/9/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/projects/contests/summer_school_2015/first_tour/in.txt");
#endif

#define endl "\n"
#define x first
#define y second

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const ll INF = (ll)9e18;
const int delta = 1000;
const pii center = {delta, delta};

ll trapeze(pii a, pii b) {
    return (ll)(a.y + b.y) * (b.x - a.x);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(false);
    int n = 0;
    cin >> n;
    vector<pii> a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y;
        a[i].x += delta;
        a[i].y += delta;
    }
    pii answer = {0, 0};
    ll minimum = INF;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            ll square = abs(trapeze(center, a[i]) + trapeze(a[i], a[j]) + trapeze(a[j], center));
            if (square > 0 && square < minimum) {
                minimum = square;
                answer = {i, j};
            }
        }
    }
    cout << answer.x + 1 << " " << answer.y + 1 << " ";
    return 0;
}