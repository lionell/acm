#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == s[3] && s[1] == s[2]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}