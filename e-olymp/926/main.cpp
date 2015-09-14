#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/926/in.txt");
#endif

double square(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    ios_base::sync_with_stdio(false);
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0, f = 0.0;
    cin >> a >> b >> c >> d >> f;
    cout.precision(4);
    cout << fixed << square(a, b, f) + square(c, d, f);
    cout << endl;
    return 0;
}