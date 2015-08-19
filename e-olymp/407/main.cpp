#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/407/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int m = 0;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int k = 0;
        cin >> k;
        if (k % 3 == 0)
            cout << "GCV";
        else if (k % 3 == 1)
            cout << "VGC";
        else
            cout << "CVG";
        cout << endl;
    }
    return 0;
}