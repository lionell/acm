/*
* Author: Ruslan Sakevych
* Complexity: O(n * m)
*/
//#define DEBUG
#ifdef DEBUG
#define cout out
#define cin in
#endif
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

#ifdef DEBUG
// Open input file
ifstream in("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Castle/tests/test30in.txt");
ofstream out("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Castle/out.txt");
#endif

int **map;
int m = 0;
int n = 0;
// Area of room with color i is area[i]
vector<int> area(1);

void Paint(int y, int x, int color) {
    map[y][x] = color;
    area[color]++;
    if (y < m - 1 && map[y + 1][x] == 0) Paint(y + 1, x, color);

    if (x < n - 1 && map[y][x + 1] == 0) Paint(y, x + 1, color);

    if (x > 0 && map[y][x - 1] == 0) Paint(y, x - 1, color);
    if (y > 0 && map[y - 1][x] == 0) Paint(y - 1, x, color);
}

int main() {
    // Read input array size
    cin >> m >> n;
    // Create dynamic array
    map = new int*[m];
    for (int i = 0; i < m; ++i) map[i] = new int[n]();
    // Read input array
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            char ch = 0;
            cin >> ch;
            // Let's change 1 -> -1 for convenience
            map[i][j] = (ch == '1') ? -1 : 0;
        }
    }
    // Let's mark our rooms with colors
    int color = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (map[i][j] == 0) {
                area.push_back(0);
                Paint(i, j, color);
                color++;
            }
        }
    }
#ifdef DEBUG
    // Print out array
    cout << "Map array: " << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << map[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Areas array: " << endl;
    for (int i = 0; i < area.size(); ++i) {
        cout << area[i] << " ";
    }
    cout << endl;
    #endif
    // Find maximum room area
    int maximum = static_cast<int>(-1e9);
    for (int i = 0; i < area.size(); ++i) maximum = max(maximum, area[i]);
    // Find maximum of two room areas
    for (int i = 1; i < m - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            if (map[i][j] == -1) {
                int current_area = 0;
                int used[4];
                for (int k = 0; k < 4; ++k) used[k] = 0;
                int k = 0;
                if (map[i - 1][j] != -1) {
                    current_area += area[map[i - 1][j]];
                    used[k] = map[i - 1][j];
                    k++;
                }
                if (map[i + 1][j] != -1 && used[0] != map[i + 1][j]) {
                    current_area += area[map[i + 1][j]];
                    used[k] = map[i + 1][j];
                    k++;
                }
                if (map[i][j - 1] != -1 && used[0] != map[i][j - 1] && used[1] != map[i][j - 1]) {
                    current_area += area[map[i][j - 1]];
                    used[k] = map[i][j - 1];
                    k++;
                }
                if (map[i][j + 1] != -1 && used[0] != map[i][j + 1] && used[1] != map[i][j + 1] && used[2] != map[i][j + 1]) {
                    current_area += area[map[i][j + 1]];
                    used[k] = map[i][j + 1];
                    k++;
                }
                maximum = max(maximum, current_area);
            }
        }
    }
    cout << maximum + 1 << endl;
    // Don't forget to clean up memory
    for (int i = 0; i < m; ++i) delete[] map[i];
    delete[] map;
    return 0;
}