#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/942/in.txt");
#endif

double sqr(double x) {
    return x * x;
}

int main() {
    ios_base::sync_with_stdio(false);
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, x3 = 0.0, y3 = 0.0, x4 = 0.0, y4 = 0.0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double ac = sqrt(sqr(x1 - x3) + sqr(y1 - y3));
    double bd = sqrt(sqr(x2 - x4) + sqr(y2 - y4));
    double x = (x1 + x3) / 2.0, y = (y1 + y3) / 2.0;
    cout.precision(3);
    cout << fixed << x << " " << fixed << y << endl;
    cout << fixed << ac << " " << fixed << bd;
    cout << endl;
    return 0;
}