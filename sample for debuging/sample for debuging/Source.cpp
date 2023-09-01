#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
	for (int i = 0; i < s.size()/2; i++) {
		char temp = s[i];
		s[i] = s[s.size() - 1 - i];
		s[s.size() - 1 - i] = temp;
		
	}
}
 
int main() {
	vector<char> arr = { 'a','b','s','d' };
	reverseString(arr);
	for (auto i : arr) {
		cout << i << endl;
	}
}