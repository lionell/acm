#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = n;
    while (n > 0) {
        x += n % 2;
        n /= 2;
    }
    cout << x;
    return 0;
}