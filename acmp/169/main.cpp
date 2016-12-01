#include <bits/stdc++.h>

using namespace std;
int ans = 0;

void dfs(int n, int k) {
    ans += n == 0 && k == 0;
    if (n + 2 <= k)
        dfs(n + 1, k - 1);
    if (n > 0)
        dfs(n - 1, k - 1);
}

int main() {
//    int n, k;
//    cin >> n >> k;
    for (int i = 1; i <= 37; ++i) {
        for (int j = 1; j <= 37; ++j) {
            ans = 0;
            int n = i;
            int k = j;
            dfs(--n, --k);
            cout << ans << ", ";
        }
        cout << endl;
    }
    return 0;
}