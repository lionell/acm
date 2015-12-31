/*
* Author: Ruslan Sakevych
* Complexity: O(1)
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
ifstream in("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Ticket2/in.txt");
ofstream out("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Ticket2/out.txt");
#endif

int main() {
    int x = 0, y = 0;
    cin >> x >> y;
    int answer = 60;
    answer = min(answer, 40 + 2*y);
    answer = min(answer, 3*x + 30);
    answer = min(answer, 3*x + 2*y);
    cout << answer << endl;
    return 0;
}