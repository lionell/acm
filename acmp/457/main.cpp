#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back
#define all(x) begin(x), end(x)

vi to_array(int x) {
    vi res;
    for (int i = 0; i < 4; ++i) {
        res.pb(x % 10);
        x /= 10;
    }
    return res;
}

int to_int(vi a) {
    int res = 0;
    for (int i = 0; i < a.size(); ++i) {
        res = res * 10 + a[i];
    }
    return res;
}

int next(int a) {
    vi x = to_array(a);
    vi y = x;
    sort(all(x), greater<int>());
    sort(all(y), less<int>());
    return to_int(x) - to_int(y);
}

int main() {
    int a;
    cin >> a;
    int b = a;
    int i = 0;
    do {
        a = b;
        b = next(a);
        i++;
    } while (b != a);
    cout << a << endl << i - 1 << endl;
    return 0;
}