#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int mini = 0;
    int maxi = 0;
    int cur = 0;
    for (char c : s) {
        if (c == '1') {
            cur++;
        } else {
            cur--;
        }
        mini = min(mini, cur);
        maxi = max(maxi, cur);
    }
    cout << maxi - mini + 1;
    return 0;
}