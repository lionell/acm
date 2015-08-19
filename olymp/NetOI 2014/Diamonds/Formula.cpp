////O(n^2)
////Max time: 12ms
//#include <iostream>
//#include <ctime> //clock()
//
//using namespace std;
//
//long long Eval(int n) {
//	long long answer = 0;
//	for (int i = 1; i <= n / 4; ++i) {
//		for (int j = i; j <= (n - i) / 3; ++j) {
//			answer += (n - i - j) / 2 - j + 1;
//		}
//	}
//	return answer;
//}
//
//int main() {
//	int n = 0;
//	cin >> n;
//	unsigned int startTime = clock();
//	long long answer = Eval(n);
//	unsigned int endTime = clock();
//	unsigned int searchTime = endTime - startTime;
//	cout << answer << endl;
//	cout << "Time: " << searchTime << "ms" << endl;
//	system("pause");
//	return 0;
//}