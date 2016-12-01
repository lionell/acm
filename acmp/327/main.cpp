#include <bits/stdc++.h>

using namespace std;

int sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

bool check(int x) {
    return sum(x / 1000) == sum(x % 1000);
}

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        cout << (check(x - 1) || check(x + 1) ? "Yes" : "No") << endl;
    }
    return 0;
}