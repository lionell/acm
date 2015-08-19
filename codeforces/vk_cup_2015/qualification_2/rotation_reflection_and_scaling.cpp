/*
* Verdict: Tests passed
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

char **create(int w, int h) {
    char **result = new char*[h];
    for (int i = 0; i < h; ++i) result[i] = new char[w]();
    return result;
}

void dispose(char **image, int h) {
    for (int i = 0; i < h; ++i) delete[] image[i];
    delete[] image;
}

char **rotate(char **image, int &w, int &h) {
    char **result = create(h, w);
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            result[i][j] = image[h - 1 - j][i];
        }
    }
    dispose(image, h);
    swap(w, h);
    return result;
}

char **reflect(char **image, int w, int h) {
    char **result = create(w, h);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            result[i][j] = image[i][w - 1 - j];
        }
    }
    dispose(image, h);
    return result;
}

char **scale(char **image, int &w, int &h) {
    w *= 2;
    h *= 2;
    char **result = create(w, h);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            result[i][j] = image[i / 2][j / 2];
        }
    }
    dispose(image, h / 2);
    return result;
}

void print(char **image, int w, int h) {
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << image[i][j];
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/qualification_2/in.txt");
    int w = 0, h = 0;
    cin >> w >> h;
    char** image = create(w, h);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> image[i][j];
        }
    }
    image = rotate(image, w, h);
    image = reflect(image, w, h);
    image = scale(image, w, h);
    print(image, w, h);
    dispose(image, h);
    return 0;
}