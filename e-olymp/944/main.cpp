#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/944/in.txt");
#endif

double sqr(double x) {
    return x * x;
}

double square(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3) {
    double a = sqrt(sqr(x1 - x2) + sqr(y1 - y2) + sqr(z1 - z2));
    double b = sqrt(sqr(x2 - x3) + sqr(y2 - y3) + sqr(z2 - z3));
    double c = sqrt(sqr(x3 - x1) + sqr(y3 - y1) + sqr(z3 - z1));
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    ios_base::sync_with_stdio(false);
    double x1 = 0.0, y1 = 0.0, z1 = 0.0, x2 = 0.0, y2 = 0.0, z2 = 0.0, x3 = 0.0, y3 = 0.0, z3 = 0.0, x4 = 0.0, y4 = 0.0, z4 = 0.0;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
    double answer = square(x1, y1, z1, x2, y2, z2, x3, y3, z3) +
                    square(x1, y1, z1, x2, y2, z2, x4, y4, z4) +
                    square(x1, y1, z1, x3, y3, z3, x4, y4, z4) +
                    square(x2, y2, z2, x3, y3, z3, x4, y4, z4);
    cout.precision(1);
    cout << fixed << answer;
    cout << endl;
    return 0;
}