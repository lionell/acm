//
// Created by lionell on 5/2/15.
//


#include <iostream>
#include <fstream>
#include <cmath>

//#define DEBUG

using namespace std;

const double EPS = 1e-12;

#ifdef DEBUG
#define cin in
ifstream in("/home/lionell/Developing/acm/olymp/complex_2015/in.txt");
#endif

int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    cin >> a >> b >> c;
    double D_root = sqrt(b * b - 4 * a * c);
    double x1 = (-b + D_root) / (2 * a);
    double x2 = (-b - D_root) / (2 * a);
    if (x1 - x2 < EPS) cout << x1 << " " << x2;
    else cout << x2 << " " << x1;
    return 0;
}