#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cur = 0;
    int max = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x > 0) {
            cur ++;
        } else {
            cur = 0;
        }
        if (cur > max) {
            max = cur;
        }
    }
    cout << max;
    return 0;
}