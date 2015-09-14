////O(n^3)
////Max time: 14355ms
//#include <iostream>
//#include <fstream>
//#include <ctime>
//
//using namespace std;
//
//long long Eval(int n) {
//	long long Answer = 0;
//	for (int i = 1; i <= n / 4; ++i) {
//		for (int j = i; j <= n / 3; ++j) {
//			for (int k = j; k <= n / 2; ++k) {
//				if (n - i - j - k >= k) Answer++;
//			}
//		}
//	}
//	return Answer;
//}
//
//int main() {
//	int n = 0;
//	cin >> n;
//	unsigned int startTime = clock();
//	long long answer = Eval(n);
//	unsigned int endTime = clock();
//	cout << answer << endl;
//	cout << "Time: " << endTime - startTime << "ms" << endl;
//	system("pause");
//	return 0;
//}