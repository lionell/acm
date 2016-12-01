#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int x;
    cin >> s >> x;
    if (s == "Home" || x % 2 == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}