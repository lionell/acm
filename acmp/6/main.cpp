#include <bits/stdc++.h>

using namespace std;

bool is_digit(char c) {
    return '0' <= c && c <= '8';
}

bool is_alpha(char c) {
    return 'A' <= c && c <= 'H';
}

bool syntax(string s) {
    if (s.length() != 5)
        return false;
    return is_alpha(s[0])
           && is_digit(s[1])
           && s[2] == '-'
           && is_alpha(s[3])
           && is_digit(s[4]);
}

int to_int(char c) {
    return c - 'A';
}

int main() {
    string s;
    cin >> s;
    if (syntax(s)) {
        if (s[0] != s[3] && s[1] != s[4] && abs(to_int(s[0]) - to_int(s[3])) + abs(s[1] - s[4]) == 3) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "ERROR";
    }
}