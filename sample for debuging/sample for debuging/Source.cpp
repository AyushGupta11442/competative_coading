#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int noup = 0;
	string s;
	cin >> s;
	for (char c : s) {
		if (isupper(c))
		{
			noup++;
		}
	}
	if (noup > s.length() - noup) {
		for (int i = 0; i < s.length(); i++) {
			if (islower(s[i])) {
				s[i] = (toupper(s[i]));
			}
		}
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			if (isupper(s[i])) {
				s[i] = (tolower(s[i]));
			}
		}
	}
	cout << s;
}