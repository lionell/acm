#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            if (j <= i) {
                c += x;
            }
        }
    }
    cout << c;
    return 0;
}