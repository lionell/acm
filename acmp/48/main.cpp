#include <bits/stdc++.h>

using namespace std;

#define len(x) (int) x.length()

int main() {
    string s;
    cin >> s;
    cout << 1;
    int i = len(s) - 1;
    while (i >= 0 && s[i] == '0') {
        cout << 0;
        i--;
    }
    return 0;
}