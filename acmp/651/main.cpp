#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

vi fact(int x) {
    vi res;
    int root = (int) sqrt(x);
    for (int i = 2; i <= root; ++i) {
        while (x % i == 0) {
            res.pb(i);
            x /= i;
        }
    }
    if (x > 1)
        res.pb(x);
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    vi fa = fact(a);
    vi fb = fact(b);
    vi d;
    set_symmetric_difference(begin(fa), end(fa), begin(fb), end(fb), back_inserter(d));
    cout << d.size();
    return 0;
}