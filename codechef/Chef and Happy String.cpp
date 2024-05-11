#include<iostream>
#include<climits>

using namespace std;
bool isvowel(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int left = 0 , right = 0;
		int count = 0;
		bool ishappy = false;
		for (int i = 0; i < s.size(); i++) {
			if (count == 3) {
				ishappy = true; 
				break;
			}
			if (isvowel(s[i])) {
				count++;
			}
			else {
				count = 0;
			}
		}
		(ishappy) ? cout << "Happy" << endl : cout << "Sad" << endl;

	}
}
