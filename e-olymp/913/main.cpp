#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/913/in.txt");
#endif

double sum(double a, double b) {
    return a + b;
}

double mul(double a, double b) {
    return a * b;
}

double sums[100];
double muls[100];

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        double a = 0, b = 0;
        cin >> a >> b;
        sums[i] = sum(a, b);
        muls[i] = mul(a, b);
    }
    for (int i = 0; i < n; ++i) {
        cout.precision(4);
        cout << fixed << sums[i] << " " << fixed << muls[i] << endl;
    }
    //cout << endl;
    return 0;
}