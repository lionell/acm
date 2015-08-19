#include <bits/stdc++.h>

using namespace std;

enum class Colors {
    RED = 1,
    BLUE = 2,
    GREEN = 3
};

long long sequence_count = 0;
vector<Colors> sequence;

void find(int red, int blue, int green) {
    if (red == 0 && blue == 0 && green == 0) {
        sequence_count++;
        for (Colors color: sequence) {
            if (color == Colors::RED) cout << "R";
            else if (color == Colors::BLUE) cout << "B";
            else if (color == Colors::GREEN) cout << "G";
        }
        cout << endl;
    }
    else {
        if (red > 0) {
            sequence.emplace_back(Colors::RED);
            find(red - 1, blue, green);
            sequence.pop_back();
        }
        if (blue > 0 && sequence.back() != Colors::BLUE) {
            sequence.emplace_back(Colors::BLUE);
            find(red, blue - 1, green);
            sequence.pop_back();
        }
        if (green > 0) {
            sequence.emplace_back(Colors::GREEN);
            find(red, blue, green - 1);
            sequence.pop_back();
        }
    }
}

int main() {
    find(3, 4, 5);
    cout << "Total: " << sequence_count;
    return 0;
}