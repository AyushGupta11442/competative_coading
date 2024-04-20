#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != b[(a.size()-1) - i]) {
				cout << "NO";
				return 0;
			}
		}
	}
	else {
		cout << "NO";
		return 0;
	}
	cout << "YES";
	return 0;
}