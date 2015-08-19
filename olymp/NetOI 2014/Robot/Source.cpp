//Complete
#include <iostream>
#include <string>
#include <map>

using namespace std;

int Hash(int x, int y) {
	return 1009 * x + y;
}

int main() {
	string s;
	cin >> s;
	int x = 0;
	int y = 0;
	map<int, int> visited;
	long long answer = 0;
	int hash = 0;
	for (int i = 0; i < s.length(); ++i) {
		switch (s[i]) {
			case 'R': ++x; break;
			case 'L': --x; break;
			case 'U': ++y; break;
			case 'D': --y; break;
		}
		hash = Hash(x, y);
		visited[hash]++;
		if (visited[hash] == 2) answer++;
	}
	cout << answer << endl;
	//system("pause");
	return 0;
}