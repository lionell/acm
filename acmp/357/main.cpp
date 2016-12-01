#include <bits/stdc++.h>

using namespace std;

int a[2];

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        a[i % 2] += s[i] - '0';
    }
    cout << ((a[0] - a[1]) % 11 == 0 ? "YES" : "NO");
}