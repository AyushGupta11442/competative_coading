#include<iostream>
using namespace std;
int main()
{
	int dis;
	cin >> dis;
	int countstep = 0;
	while (dis > 0)
	{
		if (dis >= 5) {
			dis -= 5;
			countstep++;
		}
		else if (dis >= 4) {
			dis -= 4;
			countstep++;
		}
		else if (dis >= 3) {
			dis -= 3;
			countstep++;
		}
		else if (dis >= 2) {
			dis -= 2;
			countstep++;
		}
		else if (dis >= 1) {
			dis -= 1;
			countstep++;
		}
	}
	cout << countstep;
}