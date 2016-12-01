#include <bits/stdc++.h>

using namespace std;

int lost(int k, int l, int m) {
    return k / 100 * l * m;
}

int has(int k, int l) {
    return k / 100 * (100 - l);
}

int main() {
    int k1, l1, m1;
    cin >> k1 >> l1 >> m1;
    int k2, l2, m2;
    cin >> k2 >> l2 >> m2;
    int sum = lost(k1, l1, m1) + lost(k2, l2, m2);
    int has1 = has(k1, l1);
    int has2 = has(k2, l2);
    if (has1 > has2) {
        sum += (has1 - has2) * m1;
    } else {
        sum += (has2 - has1) * m2;
    }
    cout << sum;
    return 0;
}