#include <bits/stdc++.h>

using namespace std;

const int INF = 1000000000;

int main() {
    int n;
    cin >> n;
    int min = INF;
    int max = -INF;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
    }
    cout << min << " " << max;
    return 0;
}