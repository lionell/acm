#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	while (s != "~") {
		for (int i = 0; i < s.length(); i++) {
			cout << s[i] - 'a' << " ";
		}
		cout << endl;
		cin >> s;
	}
	return 0;
}