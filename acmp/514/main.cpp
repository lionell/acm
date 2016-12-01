#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int n = 0;
    int s = 0;
    while (s <= k) {
        n++;
        s = (1 + n) * n / 2;
    }
    cout << n - 1;
    return 0;
}