#include <iostream>
using namespace std;
int main()
{
	int costofbanana, moneyhas, noofbanana;
	cin >> costofbanana >> moneyhas >> noofbanana;
	int totalmoney = 0;
	for (int i = 1; i <= noofbanana; i++)
	{
		totalmoney += i * costofbanana;
	}
	(totalmoney < moneyhas) ? cout << 0 : cout << totalmoney - moneyhas;
}