#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/946/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    long double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, x3 = 0.0, y3 = 0.0, x4 = 0.0, y4 = 0.0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long double s1 = (x2 - x1) * (y2 + y1);
    long double s2 = (x3 - x2) * (y3 + y2);
    long double s3 = (x4 - x3) * (y4 + y3);
    long double s4 = (x1 - x4) * (y1 + y4);
    long double s = (s1 + s2 + s3 + s4) / 2.0;
    cout << (int)round(s + LDBL_EPSILON);
    cout << endl;
    return 0;
}