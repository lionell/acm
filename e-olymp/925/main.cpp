#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/925/in.txt");
#endif

double sqr(double x) {
    return x * x;
}

int main() {
    ios_base::sync_with_stdio(false);
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, x3 = 0.0, y3 = 0.0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt(sqr(x1 - x2) + sqr(y1 - y2));
    double b = sqrt(sqr(x2 - x3) + sqr(y2 - y3));
    double c = sqrt(sqr(x3 - x1) + sqr(y3 - y1));
    double P = a + b + c;
    double S = sqrt((P / 2) * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));
    cout.precision(4);
    cout << fixed << P << " " << fixed << S;
    cout << endl;
    return 0;
}