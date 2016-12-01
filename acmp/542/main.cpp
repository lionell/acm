#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define eb emplace_back

int main() {
    int n;
    cin >> n;
    vi a;
    while (n > 0) {
        a.eb(n % 2);
        n /= 2;
    }
    int b = 0;
    for (int x : a) {
        b = b * 2 + x;
    }
    cout << b;
    return 0;
}