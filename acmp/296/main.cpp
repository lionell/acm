#include <bits/stdc++.h>

using namespace std;

bool check(int n, int y) {
    if (n - 3 * y < 0)
        return false;
    return (n - 3 * y) % 5 == 0;
}

int main() {
    int n;
    cin >> n;
    if (check(n, 0)) {
        cout << n / 5 << " " << 0;
    } else if (check(n, 1)) {
        cout << (n - 3) / 5 << " " << 1;
    } else if (check(n, 2)) {
        cout << (n - 6) / 5 << " " << 2;
    } else if (check(n, 3)) {
        cout << (n - 9) / 5 << " " << 3;
    } else {
        cout << (n - 12) / 5 << " " << 4;
    }
    return 0;
}