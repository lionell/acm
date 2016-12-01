//
// Created by lionell on 7/9/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/projects/contests/summer_school_2015/first_tour/in.txt");
#endif

#define endl "\n"
#define x first
#define y second

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(false);
    int n = 0;
    cin >> n;
    int answer = 1;
    if (n > 1 && n % 2 == 1) {
        int x = 2;
        while (x != 1) {
            x = (int)((2LL * x) % n);
            answer++;
        }
    } else if (n % 2 == 0) {
        answer = -1;
    }
    cout << answer;
    return 0;
}