#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    int i;
    cin >> c >> i;
    if ((c - 'a' + i - 1) % 2 == 0) {
        cout << "BLACK";
    } else {
        cout << "WHITE";
    }
    return 0;
}