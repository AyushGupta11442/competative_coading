#include <iostream>
#include <string>

using namespace std;
int find1(string s) {
	int count = 0;
	for (char c : s) {
		if (c == '1') {
			count++;
		}

	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s , b;
		cin >> s >> b;
		if (s.length() != b.length()) {
			cout << "NO" << endl;
			break;
		} 
		int noOf1 = find1(s);
		int noOf1InB = find1(b);

		if (noOf1 == noOf1InB) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
