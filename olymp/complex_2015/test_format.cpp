//
// Created by lionell on 5/2/15.
//

#include <bits/stdc++.h>

using namespace std;

string home = "/home/lionell/Developing/acm/olymp/complex_2015/A/";

string get_in_file_name(int n) {
    string result = "";
    if (n < 10) result += "0";
    result += to_string(n);
    return result;
}

int main() {
    ifstream in;
    ofstream out;
    for (int i = 0; i <= 15; ++i) {
        cout << home + get_in_file_name(i) << endl;
        cout << "flooding.test." + get_in_file_name(i) << endl;
        in.open(home + get_in_file_name(i));
        out.open(home + "flooding.test." + get_in_file_name(i));
        string temp = "";
        while(getline(in, temp)) out << temp;
        in.close();
        out << endl;
        in.open(home + get_in_file_name(i) + ".a");
        while(getline(in, temp)) out << temp;
        in.close();
        out.close();
    }
    return 0;
}