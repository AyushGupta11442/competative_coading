#include <iostream>
using namespace std;

int main() {
	long long  t;
	cin >> t;
	while (t != 1) {
		cout << t <<" ";
		if (t % 2 == 0) {
			t /= 2;
		}
		else {
			t = t * 3 + 1;
		}
	}
	cout << t << endl;
	return 0;
}