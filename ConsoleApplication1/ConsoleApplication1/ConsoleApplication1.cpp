#include <iostream>
#include <vector>

using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	vector<int> toreturn;
	for (int i = 0; i < n; i++) {
		if (i + 1 == arr[i]) {
			toreturn.push_back(i+1);
		}
	}
	return toreturn;
}

int main() {
	int arr[] = { 15,2 ,45, 12, 7 };
	vector<int> arrr = valueEqualToIndex(arr, 5);
	for (int i = 0; i < arrr.size(); i++) {
		cout << arrr[i] << " ";
	}
}