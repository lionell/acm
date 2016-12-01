#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
    if (s.length() < 6)
        return false;
    return (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]);
}

int main() {
    string s;
    cin >> s;
    cout << (check(s) ? "YES" : "NO");
}