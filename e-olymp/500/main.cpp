#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/500/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int l = 0, w = 0, h = 0;
        cin >> l >> w >> h;
        int square = (l + w) * h * 2;
        cout << (square / 16 + (square % 16 > 0)) << endl;
    }
    return 0;
}