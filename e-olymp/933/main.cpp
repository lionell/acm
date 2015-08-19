#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/933/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    n = abs(n);
    cout << (n % 10 + n / 10);
    cout << endl;
    return 0;
}