#include <bits/stdc++.h>

using namespace std;

string e = "2.7182818284590452353602875";

string round(int n) {
    if (n == 0)
        return "3";
    if (n == 25)
        return e;
    string ans = e.substr(0, n + 1UL);
    if (e[2 + n] >= '5') {
        ans += e[1 + n] + 1;
    } else {
        ans += e[1 + n];
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << round(n);
    return 0;
}