#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int no4 = 0, no7 = 0;
	for (char s : str) {
		if (s == '4') {
			no4++;
		}if (s == '7') {
			no4++;
		}
	}
	cout << (((no4 == 4 || no4 == 7) && no4 != 0) ? "YES" : "NO");

}