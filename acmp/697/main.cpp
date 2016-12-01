#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, w, h;
    cin >> l >> w >> h;
    int s = 2 * h * (l + w);
    cout << (s + 15) / 16;
    return 0;
}