#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int f1 = 1;
    int f2 = 0;
    int i = 0;
    while (i <= n) {
        int t = f2;
        f2 = (f2 + f1) % 10;
        f1 = t;
        i++;
    }
    cout << f2;
}