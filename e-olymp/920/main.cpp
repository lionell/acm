#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/920/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    double x = 0.0, y = 0.0, z = 0.0;
    cin >> x >> y >> z;
    cout.precision(2);
    cout << fixed << min(min(max(x, y), max(y, z)), x + y + z);
    cout << endl;
    return 0;
}