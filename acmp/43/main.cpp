#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cur = 0;
    int max = 0;
    for (char c : s) {
        if (c == '0') {
            cur++;
        } else {
            cur = 0;
        }
        if (cur > max) {
            max = cur;
        }
    }
    cout << max;
    return 0;
}