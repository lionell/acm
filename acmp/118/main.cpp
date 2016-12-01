#include <bits/stdc++.h>

using namespace std;

bool killed[501];

int main() {
    int n, k;
    cin >> n >> k;
    int cur = n - 1;
    for (int i = 0; i < n - 1; ++i) {
        int j = 0;
        while (j < k) {
            cur++;
            if (cur == n) {
                cur = 0;
            }
            if (!killed[cur]) {
                j++;
            }
        }
        killed[cur] = true;
    }
    for (int i = 0; i < n; ++i) {
        if (!killed[i]) {
            cout << i + 1;
        }
    }
    return 0;
}