#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	int maxpeople = 0;
	int noPeople = 0;
	while (t--) {
		int a, b;
		cin >> a >> b;
		noPeople = (noPeople - a) + b;
		maxpeople = max(noPeople, maxpeople);
	}
	cout << maxpeople;
}