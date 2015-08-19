#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/948/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    double d = 0.0, p = 0.0;
    cin >> d >> p;
    double h = sqrt(p * p - d * d / 2.0);
    double v = d * d * h / 3.0;
    double h1 = sqrt(p * p - d * d / 4.0);
    double s = d * d + 2.0 * h1 * d;
    cout.precision(3);
    cout << fixed << s << " " << fixed << v;
    cout << endl;
    return 0;
}