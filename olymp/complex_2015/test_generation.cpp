//
// Created by lionell on 5/3/15.
//

#include <bits/stdc++.h>

#define DEBUG

using namespace std;

#ifdef DEBUG
#define cin in
#define cout out
ifstream in("/home/lionell/Developing/acm/olymp/complex_2015/tests.txt");
ofstream out("/home/lionell/Developing/acm/olymp/complex_2015/out2.txt");
#endif

double a = 0.0, b = 0.0, c = 0.0;
const double EPS = 1e-12;
const double MIN = -12e11, MAX = 12e11;

double f(double x) {
    return a*x*x+b*x+c;
}

double solve2(double l, double r) {
    while (abs(r - l) > 1e-15 * (abs(l) + abs(r))) {
        double t = (l + r) / 2;
        if (f(t) * f(l) < 0) r = t;
        else l = t;
    }
    return l;
}

tuple<double, double> solve1(double a, double b, double c) {
    double D_root = sqrt(b * b - 4 * a * c);
    double x1 = (-b + D_root) / (2 * a);
    double x2 = (-b - D_root) / (2 * a);
    if (b > EPS) x1 = c / (a * x2);
    else x2 = c / (a * x1);
    if (x1 - x2 < EPS) return make_tuple(x1, x2);
    else return make_tuple(x2, x1);
}

double f_rand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

int main() {
    std::uniform_real_distribution<double> unif1(-1e2, 1e2);
    std::uniform_real_distribution<double> unif2(-1e12, 1e12);
    std::uniform_real_distribution<double> unif3(-1e3, 1e3);
    std::default_random_engine re;
    for (int i = 0; i < 1000000; ++i) {
        cin >> a >> b >> c;
        /*do {
            a = unif1(re);
            b = unif2(re);
            c = unif3(re);
        } while (b * b - 4 * a * c < EPS);
        */
        //double x1 = 0.0, x2 = 0.0;
        //tie(x1, x2) = solve1(a, b, c);
        double _x1 = solve2(-1e25, -b / (2 * a));
        double _x2 = solve2(1e25, -b / (2 * a));
        cout << _x1 << " " << _x2 << endl;
        //cout << fixed << a << " " << fixed << b << " " << fixed << c << endl;
    }
    return 0;
}