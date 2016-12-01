#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 200001;

int d[MAX_N];
int sz[MAX_N];

int c[MAX_N];
map<int, int> t[MAX_N];
int nc[MAX_N];

int find(int a) {
    if (d[a] == a) {
        return a;
    }
    return d[a] = find(d[a]);
}

void unite(int a, int b) {
    int x = find(a);
    int y = find(b);
    if (sz[x] > sz[y]) {
        swap(x, y);
    }
    d[x] = y;
    sz[y] += sz[x] + 1;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
        d[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        unite(a, b);
    }
    for (int i = 1; i <= n; i++) {
        t[find(i)][c[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (t[i].empty()) continue;
        int maxi = t[i].begin()->first;
        for (auto p : t[i]) {
            if (t[i][maxi] < p.second) {
                maxi = p.first;
            }
        }
        nc[i] = maxi;
    }
    for (int i = 1; i <= n; i++) {
        nc[i] = nc[find(i)];
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += c[i] != nc[i];
    }
    cout << res;
    return 0;
}