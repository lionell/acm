////O(max(t[i]) - min(t[i])*n)
//#include <iostream>
//
//using namespace std;
//
//const int Inf = 2000000000;
//
//int t[100000];
//
//int main() {
//	int n = 0;
//	cin >> n;
//	int min = Inf;
//	int max = -Inf;
//	for (int i = 0; i < n; ++i) {
//		cin >> t[i];
//		if (t[i] < min) min = t[i];
//		if (t[i] > max) max = t[i];
//	}
//	int answer = Inf;
//	for (int k = min; k <= max; ++k) {
//		int sum = 0;
//		for (int i = 0; i < n; ++i) sum += abs(t[i] - k);
//		if (sum < answer) answer = sum;
//	}
//	cout << answer;
//	return 0;
//}