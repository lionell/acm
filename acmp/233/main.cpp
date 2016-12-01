#include <bits/stdc++.h>

using namespace std;

int h[1001];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++) {
        if (h[i] <= 437) {
            cout << "Crash " << i + 1;
            return 0;
        }
    }
    cout << "No crash";
    return 0;
}