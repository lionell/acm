#include <bits/stdc++.h>

using namespace std;

bool isletter(char c) {
    return c == 'A'
           || c == 'B'
           || c == 'C'
           || c == 'E'
           || c == 'H'
           || c == 'K'
           || c == 'M'
           || c == 'O'
           || c == 'P'
           || c == 'T'
           || c == 'X'
           || c == 'Y';
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s.length() == 6
            && isletter(s[0])
            && isdigit(s[1])
            && isdigit(s[2])
            && isdigit(s[3])
            && isletter(s[4])
            && isletter(s[5])) {
            cout << "Yes";
        } else {
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}