//
// Created by lionell on 5/2/15.
//

#include <iostream>
#include <fstream>
#include <cmath>

#define DEBUG

using namespace std;

const double EPS = 1e-12;
const double INF = int(1e10);

#ifdef DEBUG
#define cin in
ifstream in("/home/lionell/Developing/acm/olymp/complex_2015/in.txt");
#endif

double sqr(double x) {
    return x * x;
}

double f(double x01, double y01, double z01, double vx1, double vy1, double vz1, double x02, double y02, double z02, double vx2, double vy2, double vz2, double time) {
    return (sqr(x01 - x02 + time * (vx1 - vx2)) + sqr(y01 - y02 + time * (vy1 - vy2)) + sqr(z01 - z02 + time * (vz1 - vz2)));
}

int main() {
    double x1 = 0.0, y1 = 0.0, z1 = 0.0, vx1 = 0.0, vy1 = 0.0, vz1 = 0.0, x2 = 0.0, y2 = 0.0, z2 = 0.0, vx2 = 0.0, vy2 = 0.0, vz2 = 0.0;
    cin >> x1 >> y1 >> z1 >> vx1 >> vy1 >> vz1 >> x2 >> y2 >> z2 >> vx2 >> vy2 >> vz2;
    double min_distance = INF, distance = 0.0;
    double t1 = 2 * vz1 / 10;
    double t2 = 2 * vz2 / 10;
    int i = 0, j = 0;
    double svz1 = vz1, svz2 = vz2;
    double old_time = 0.0, time = 0.0;
    double x01 = x1, y01 = y1, x02 = x2, y02 = y2, z01 = 0.0, z02 = 0.0;
    do {
        old_time = time;
        if (t1 * (i + 1) < t2 * (j + 1)) time = (++i) * t1;
        else time = (++j) * t2;
        double delta_time = time - old_time;
        double left = 0, right = delta_time;
        for (int t = 0; t < 100; ++t) {
            double m1 = left + (right - left) / 3,
                   m2 = right - (right - left) / 3;
            double f1 = f(x01, y01, z01, vx1, vy1, vz1, x02, y02, z02, vx2, vy2, vz2, m1);
            double f2 = f(x01, y01, z01, vx1, vy1, vz1, x02, y02, z02, vx2, vy2, vz2, m2);
            if (f(x01, y01, z01, vx1, vy1, vz1, x02, y02, z02, vx2, vy2, vz2, m2) - f(x01, y01, z01, vx1, vy1, vz1, x02, y02, z02, vx2, vy2, vz2, m1) < EPS)
                left = m1;
            else
                right = m2;
        }
        distance = f(x01, y01, z01, vx1, vy1, vz1, x02, y02, z02, vx2, vy2, vz2, left);
        x01 += delta_time * vx1;
        y01 += delta_time * vy1;
        x02 += delta_time * vx2;
        y02 += delta_time * vy2;
        z01 += + vz1 * delta_time - 5 * sqr(delta_time);
        z02 += + vz2 * delta_time - 5 * sqr(delta_time);
        vz1 -= 10 * delta_time;
        vz2 -= 10 * delta_time;
        if (fabs(vz1 + svz1) < EPS) vz1 = svz1;
        if (fabs(vz2 + svz2) < EPS) vz2 = svz2;
        if (distance - min_distance < EPS) min_distance = distance;
    } while (i + j < 20);
    cout.precision(16);
    cout << fixed << sqrt(min_distance);
    return 0;
}