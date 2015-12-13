/*
* Author: Ruslan Sakevych
* Complexity: O(n^2)
*/
#define DEBUG

#include <iostream>
#include <fstream>

#ifdef DEBUG
#define cout out
#define cin in
#endif

using namespace std;

#ifdef DEBUG
ifstream in("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Money/in.txt");
ofstream out("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Money/out.txt");
#endif

int main() {
    int n = 0, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0;
    cin >> n >> x >> y >> z;
    c = min(min(x, y), z);
    a = max(max(x, y), z);
    b = x + y + z - a - c;

    int answer = 0;
    for (int i = 0; i <= n / a; ++i) {
        for (int j = 0; j <= (n - a*i) / b; ++j) {
            if ((n - a*i - b*j) % c == 0) answer = max(answer, i + j + (n - a*i - b*j) / c);
        }
    }
    cout << answer;
    return 0;
}