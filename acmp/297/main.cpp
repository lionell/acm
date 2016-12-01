#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (char c : s) {
        switch (c) {
            case '6':
            case '9':
            case '0':
                cnt += 1;
                break;
            case '8':
                cnt += 2;
                break;
        }
    }
    cout << cnt;
    return 0;
}