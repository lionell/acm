#include <bits/stdc++.h>

using namespace std;

#define memzero(x) memset(x, 0, sizeof(x))

bool used[10];

bool check(int a, int b) {
    memzero(used);
    while (a > 0) {
        used[a % 10] = true;
        a /= 10;
    }
    while (b > 0) {
        if (!used[b % 10])
            return false;
        b /= 10;
    }
    return true;
}

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;
        cout << (check(a, b) && check(b, a) ? "YES" : "NO") << endl;
    }
    return 0;
}