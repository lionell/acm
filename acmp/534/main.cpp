#include <bits/stdc++.h>

using namespace std;

int c[101];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        c[x - 1]--;
    }
    for (int i = 0; i < n; ++i) {
        cout << (c[i] >= 0 ? "no" : "yes") << endl;
    }
    return 0;
}