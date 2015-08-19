#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/938/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, alpha = 0.0;
    cin >> x1 >> y1 >> x2 >> y2 >> alpha;
    double x = (x1 + alpha * x2) / (1 + alpha);
    double y = (y1 + alpha * y2) / (1 + alpha);
    cout.precision(2);
    cout << fixed << x << " " << fixed << y;
    cout << endl;
    return 0;
}