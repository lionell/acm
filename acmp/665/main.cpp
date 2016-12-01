#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> clock = {"00:00", "01:10", "02:20", "03:30", "04:40",
                         "05:50", "10:01", "11:11", "12:21",
                         "13:31", "14:41", "15:51", "20:02",
                         "21:12", "22:22", "23:32"};
    string s;
    cin >> s;
    auto where = clock.upper_bound(s);
    if (where == end(clock)) {
        where = begin(clock);
    }
    cout << *where;
    return 0;
}