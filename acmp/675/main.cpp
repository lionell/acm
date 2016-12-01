#include <bits/stdc++.h>

using namespace std;

const int INF = 1000000000;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = INF;
    for (int i = 0; i < n; ++i) {
        int dots = 0;
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            dots += c == '.';
        }
        ans = min(ans, dots);
    }
    cout << ans;
    return 0;
}