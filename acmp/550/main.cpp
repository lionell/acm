#include <bits/stdc++.h>

using namespace std;

string to_string(int x) {
    stringstream t;
    t << x;
    return t.str();
}

string format(int n) {
    string res = "";
    if (n < 10) {
        res += '0';
    }
    if (n < 100) {
        res += '0';
    }
    if (n < 1000) {
        res += '0';
    }
    res += to_string(n);
    return res;
}

int main() {
    int n;
    cin >> n;
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        cout << "12/09/";
    } else {
        cout << "13/09/";
    }
    cout << format(n);
    return 0;
}