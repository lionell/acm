#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (1 + n) * (n > 0 ? n : 2 - n) / 2;
    return 0;
}