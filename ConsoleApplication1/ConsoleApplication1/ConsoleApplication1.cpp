#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include < algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		vector<int> arr(b);
		int totalsum = 0;
		for (int i = 0; i < a; i++) {
			int temp;
			cin >> temp;
			arr[i] = temp;
			totalsum += temp;
		}
		if (totalsum < b) {
			cout << 0 << endl;
		}
		else {
			sort(arr.begin(), arr.end());
			for (auto i : arr) {
				cout << i;
			}
			int sum = 0;
			int val = 0;
			for (int i = 0; i < a; i++) {
				val = arr[i];
				cout << val;
				sum += val;
				if (totalsum - b  < sum) {
					cout << val << endl;
				}
			}
		}
	}
	return 0;
}
