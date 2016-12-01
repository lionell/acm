#include <bits/stdc++.h>

using namespace std;

const int MAX_N = (1 << 18) + 1;

int a[MAX_N];

int intToKey(long long x) {
    int ans = 0;
    for (int i = 0; i < 18; i++) {
        ans += (x % 2 == 1) * (1 << i);
        x /= 10;
    }
    return ans;
}

int strToInt(string s) {
    int ans = 0;
    for (int i = 0; i < 18; i++) {
        ans += (s[17 - i] - '0') * (1 << i);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        char c;
        long long x;
        string s;
        cin >> c;
        switch (c) {
            case '+':
                cin >> x;
                a[intToKey(x)]++;
                break;
            case '-':
                cin >> x;
                a[intToKey(x)]--;
                break;
            case '?':
                cin >> s;
                for (int j = s.length(); j < 18; j++) {
                    s = "0" + s;
                }
                cout << a[strToInt(s)] << endl;
                break;
        }
    }
    return 0;
}