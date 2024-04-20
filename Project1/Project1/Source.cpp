#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int random_number(int a, int b) {
	srand(time(nullptr));
	return rand() % (b - a + 1) + a;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int x = random_number(a, b);
		int y = INT_MIN;
		while (x > y) {
			y = random_number(b, c);
		}
		int z = INT_MIN;
		while (y > z) {
			z = random_number(c, d);
		}
		cout << x << " " << y << " " << z << endl;

	}
}