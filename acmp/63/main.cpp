#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, p;
    cin >> s >> p;
    int d = (int) sqrt(s * s - 4 * p);
    cout << (s - d) / 2 << " " << (s + d) / 2;
    return 0;
}