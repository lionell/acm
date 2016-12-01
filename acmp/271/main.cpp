#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int f1 = 1;
    int f2 = 1;
    int i = 2;
    while (f2 < n) {
        int t = f2;
        f2 += f1;
        f1 = t;
        i++;
    }
    if (f2 == n) {
        cout << 1 << endl << i;
    } else {
        cout << 0;
    }
    return 0;
}