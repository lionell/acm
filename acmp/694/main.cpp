#include <bits/stdc++.h>

using namespace std;

int delta[33];

bool check(int n) {
    int c = 0;
    for (int i = 1; i <= 31; ++i) {
        c += delta[i];
        if (c == n)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        delta[a]++;
        delta[b + 1]--;
    }
    cout << (check(n) ? "YES" : "NO");
    return 0;
}