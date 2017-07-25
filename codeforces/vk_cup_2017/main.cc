#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef long double ld;

const ld EPS = 1e-5;
int m = 10;
vector<int> ms = {2, 5};

int mul(int a, int b, int m) {
  return ((ll)a * b) % m;
}

int phi(int n) {
    int result = n;   // Initialize result as n

    // Consider all prime factors of n and subtract their
    // multiples from result
    for (int p=2; p*p<=n; ++p) {
        // Check if p is a prime factor.
        if (n % p == 0) {
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
    return result;
}

int pow(int a, int b, int m) {
  int x = 1;
  while (b > 0) {
    if (b & 1) {
      x = mul(x, a, m);
    }
    b >>= 1;
    a = mul(a, a, m);
  }
  return x;
}

int find(int a, int b) {
  int nm = m;
  for (int d : ms) {
    if (a % d == 0) {
      a /= d;
      b /= d;
      nm /= d;
    }
  }
  // cout << a << " " << b << " " << nm << endl;
  return mul(pow(a, phi(nm) - 1, nm), b, nm);
}

vector<int> gen(vector<int> a) {
  vector<int> res(a.size());
  res[0] = a[0];
  for (int i = 1; i < a.size(); i++) {
    res[i] = find(a[i - 1], a[i]);
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  vi x = gen({3, 7, 4, 6, 8, 0});
  for (int t : x) {
    cout << t << " ";
  }
  return 0;
}
