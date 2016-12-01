#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main() {
    int n;
    cin >> n;
    int index = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1)
            index = i;
    }
    for (int i = index; i < n; ++i) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < index; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}