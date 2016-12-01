#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j;
    cin >> n >> i >> j;
    if (i > j)
        swap(i, j);
    cout << min(j - i, abs(n - j + i)) - 1;
    return 0;
}