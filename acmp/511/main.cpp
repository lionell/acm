#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int t = (k - 1) * 5;
    if (t > 12 * 60) {
        cout << "NO";
    } else {
        cout << t / 60 << " " << t % 60;
    }
    return 0;
}