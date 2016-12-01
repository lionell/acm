#include <bits/stdc++.h>

using namespace std;

int a[3];
int b[3];
int c[3];

bool equal() {
    for (int i = 0; i < 3; ++i) {
        if (c[i] != 0)
            return false;
    }
    return true;
}

bool positive() {
    for (int i = 0; i < 3; ++i) {
        if (c[i] < 0)
            return false;
    }
    return true;
}

bool negative() {
    for (int i = 0; i < 3; ++i) {
        if (c[i] > 0)
            return false;
    }
    return true;
}

int main() {
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    sort(a, a + 3);
    sort(b, b + 3);
    c[0] = a[0] - b[0];
    c[1] = a[1] - b[1];
    c[2] = a[2] - b[2];
    if (equal()) {
        cout << "Boxes are equal";
    } else if (positive()) {
        cout << "The first box is larger than the second one";
    } else if (negative()) {
        cout << "The first box is smaller than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
}