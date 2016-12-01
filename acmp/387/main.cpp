#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        ull sep = s.find("->");
        string left = s.substr(0, sep);
        string right = s.substr(sep + 2);
        ans += right.find(left) == 0;
    }
    cout << ans;
    return 0;
}