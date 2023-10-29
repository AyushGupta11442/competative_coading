// https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <string>

using namespace std;

void main() {
	string str;
	cin >> str;
	int no0 = 0, no1 = 0;
	for (char s : str) {
		if (s == '0') {
			no0++;
			no1 = 0;
		}if (s == '1') {
			no1++;
			no0 = 0;
		}if (no0 == 7 || no1 == 7) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}