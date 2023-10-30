// https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main() {
	int n;
	cin >> n;
	int sum = 0;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
		sum += vec[i];
	}
	sort(vec.begin(), vec.end());
	int sumofm = 0;
	int pickcoin = 0;
	for (int i = n - 1; i >= 0 && sumofm <= (sum /2); i--) {
		sumofm += vec[i];
		pickcoin++;
	}
	if ( sumofm > (sum / 2)) {
		cout << pickcoin;
	}
}