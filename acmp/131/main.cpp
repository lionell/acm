#include <bits/stdc++.h>

using namespace std;

const int INF = 1000;

int main() {
    int n;
    cin >> n;
    int max = -INF;
    int num = -2;
    for (int i = 0; i < n; ++i) {
        int v, s;
        cin >> v >> s;
        if (s == 1 && v > max) {
            max = v;
            num = i;
        }
    }
    cout << num + 1;
    return 0;
}