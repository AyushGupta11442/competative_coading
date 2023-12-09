#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int maxSubarr = 0;
	int seqno = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1]) {
			seqno++;
		}
		else {
			maxSubarr = (seqno >= maxSubarr) ? seqno : maxSubarr;
			seqno = 0;
		}
	}
	cout << ((maxSubarr > 0) ? maxSubarr + 1 : (seqno > 0) ? seqno +1 : seqno);
}