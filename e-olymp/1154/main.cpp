#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/1154/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0, m = 0;
    while (cin >> n >> m) {
        cout << ((n % m == 0 && m != 1) ? "NO" : "YES") << endl;
    }
    return 0;
}