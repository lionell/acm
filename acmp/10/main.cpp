#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll eval(int a, int b, int c, int d, int x) {
    return 1LL * a * x * x * x + 1LL * b * x * x + 1LL * c * x + d;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = -100; i <= 100; ++i) {
        if (eval(a, b, c, d, i) == 0) {
            cout << i << " ";
        }
    }
    return 0;
}