#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_299/in.txt");
#endif

string twenty[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

string tens[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    if (n >= 20) {
        cout << tens[n / 10 - 2];
        if (n % 10 != 0) cout << "-" << twenty[n % 10];
    } else cout << twenty[n];
    return 0;
}