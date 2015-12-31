#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/932/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int s = 0, a = 0;
    cin >> s >> a;
    double x = (-a + sqrt(a * a + 8.0 * s)) / 2.0;
    cout.precision(2);
    cout << fixed << x;
    cout << endl;
    return 0;
}