#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/934/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    double ha = (2.0 * s) / a, hb = (2.0 * s) / b, hc = (2 * s) / c;
    cout.precision(2);
    cout << fixed << ha << " " << fixed << hb << " " << fixed << hc;
    cout << endl;
    return 0;
}