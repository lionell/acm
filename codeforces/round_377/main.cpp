#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100001;

int d[MAX_N];
int a[MAX_N];
int t[MAX_N];
int n, m;

bool check(int l) {
    map<int, int> last;
    memset(t, 0, sizeof(int) * l);
    for (int i = l - 1; i >= 0; i--) {
        if (d[i] != 0 && last.find(d[i]) == last.end()) {
            last[d[i]] = i;
            t[i] = d[i];
        }
    }
    if (last.size() != m) {
        return false;
    }
    int j = 0;
    for (int i = 0; i < l; i++) {
        if (t[i] != 0) {
            j -= a[t[i] - 1];
        } else {
            j++;
        }
        if (j < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int l = 0, r = n;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (check(m)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    cout << (check(r) ? r : -1);
    return 0;
}