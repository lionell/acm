#include <bits/stdc++.h>

using namespace std;

int to_time(string s) {
    int h = atoi(s.substr(0, 2).c_str());
    int m = atoi(s.substr(3, 2).c_str());
    return h * 60 + m;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string max_name = "";
    double max_speed = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        int j = 1;
        while (s[j] != '\"')
            j++;
        string name = s.substr(0, j + 1);
        j += 2;
        int b = j;
        while (s[j] != ' ')
            j++;
        string start = s.substr(b, j - b + 1);
        j++;
        string finish = s.substr(j, s.length() - j + 1);
        int time = to_time(finish) - to_time(start);
        if (time <= 0)
            time += 24 * 60;
        double speed = 650.0 * 60 / time;
        if (speed > max_speed) {
            max_name = name;
            max_speed = speed;
        }
    }
    cout << "The fastest train is " << max_name << "." << endl;
    cout << "It's speed is " << (int) round(max_speed) << " km/h, approximately.";
    return 0;
}