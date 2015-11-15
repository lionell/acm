#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/931/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int product = 1, sum = 0;
    while (n > 0) {
        product *= n % 10;
        sum += n % 10;
        n /= 10;
    }
    cout.precision(3);
    cout << fixed << ((double)product / sum);
    cout << endl;
    return 0;
}