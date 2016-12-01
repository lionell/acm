#include <bits/stdc++.h>

using namespace std;

bool check(int a, int b, int w, int k) {
    return a <= w && b >= k;
}

int main() {
    int k, w, a1, b1, a2, b2, a3, b3;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    bool ans = false;
    ans |= check(a1, b1, w, k);
    ans |= check(a2, b2, w, k);
    ans |= check(a3, b3, w, k);
    ans |= check(a1 + a2, b1 + b2, w, k);
    ans |= check(a1 + a3, b1 + b3, w, k);
    ans |= check(a2 + a3, b2 + b3, w, k);
    ans |= check(a1 + a2 + a3, b1 + b2 + b3, w, k);
    cout << (ans ? "YES" : "NO");
    return 0;
}