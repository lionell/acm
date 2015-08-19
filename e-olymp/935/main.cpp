#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/935/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    n = abs(n);
    int last = n % 10;
    int medium = ((n / 10) % 10);
    int first = n / 100;
    cout << first << endl << medium << endl << last;
    cout << endl;
    return 0;
}