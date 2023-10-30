#include  <iostream>

using namespace std;

int main() {
	int num, pos; 
	cin >> num >> pos;
	int output;
	if (pos >= num / 2) {
		for (int i = 2; i <= num && pos-- ; i += 2) {
			output = i;
		}
	}
	else {
		for (int i = 1; i <= num && pos--; i += 2) {
			output = i;
		}
	}
	cout << output;

}
 