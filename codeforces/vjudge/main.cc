#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_N = 1000001;
int ans[MAX_N];

int reverse(int x) {
  int y = 0;
  while (x > 0) {
    y = 10 * y + x % 10;
    x /= 10;
  }
  return y;
}

void sieve() {
  ans[1] = 1;
  for (int i = 2; i * i < MAX_N; i++) {
    if (ans[i] == 0) {
      for (int j = i * i; j < MAX_N; j += i) {
        ans[j] = 1;
      }
    }
  }
  for (int i = 2; i < MAX_N; i++) {
    int t = reverse(i);
    if (ans[i] == 0 && ans[t] == 0) {
      ans[i] = ans[t] = 2;
    }
  }
}

int main() {
  sieve();
  int n;
  vector<string> res;
  while (cin >> n) {
    if (ans[n] == 0) {
      res.push_back(to_string(n) + " is prime.");
    } else if (ans[n] == 1) {
      res.push_back(to_string(n) + " is not prime.");
    } else {
      res.push_back(to_string(n) + " is emirp.");
    }
  }

  for (int i = 0; i < (int)res.size() - 1; i++) {
    cout << res[i] << endl;
  }
  cout << res[(int)res.size() - 1];
  return 0;
}
