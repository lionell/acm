#include <fstream>
#include <iostream>

using namespace std;

#define ACMP
#define cin in

int main() {
#ifdef ACMP
    #define cout out
    ifstream in("input.txt");
    ofstream out("output.txt");
#else
    ifstream in("/home/lionell/Developing/acm/acmp/477/in.txt");
#endif
    int sum = 0;
    char ch = 0;
    while (cin >> ch) {
        sum += (ch - '0');
    }
    if (sum % 3 == 0) cout << 2;
    else cout << 1 << endl << (sum % 3);
    in.close();
#ifdef ACMP
    out.close();
#endif
    return 0;
}