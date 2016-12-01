#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = 1;
    for (int i = 0; i < b; ++i) {
        x *= a;
        x %= 10;
    }
    cout << x;
    return 0;
}