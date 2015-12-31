#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/1453/in.txt");
#endif

#define endl "\n"

struct edge {
    int a;
    int b;
    int c;
};

const int INF = 30000;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(false);
    int n = 0, m = 0;
    cin >> n >> m;
    vector<edge> e(m + 0UL);
    for (int i = 0; i < m; ++i) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        e[i] = {a - 1, b - 1, c};
    }
    vector<int> d(n + 0UL, INF);
    d[0] = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (auto x: e) {
            if (d[x.a] != INF) {
                d[x.b] = min(d[x.b], d[x.a] + x.c);
            }
        }
    }
    for (auto x: d) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}