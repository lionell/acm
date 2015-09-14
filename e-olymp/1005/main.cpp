#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/1005/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n = 0, m = 0;
        cin >> n >> m;
        cout << (n % (m + 1) == 0) + 1;
    }
    cout << endl;
    return 0;
}