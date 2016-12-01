#include <bits/stdc++.h>

using namespace std;

int t[101];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int h, m, s;
        cin >> h >> m >> s;
        t[i] = 60 * 60 * h + 60 * m + s;
    }
    sort(t, t + n);
    for (int i = 0; i < n; ++i) {
        int h = t[i] / (60 * 60); t[i] %= 60 * 60;
        int m = t[i] / 60; t[i] %= 60;
        int s = t[i];
        cout << h << " " << m << " " << s << endl;
    }
    return 0;
}