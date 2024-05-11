#include <iostream>

using namespace std;


int main() {
	int  n;
	cin >> n;
	int num = 0;
	while (n--) {
		string s;
		cin >> s;
		if (s[0] == '+' || s[2] == '+') {
			num++;
		} 
		else if(s[0] == '-' || s[2] == '-') {
			num--;
		}
		
	}
	cout << num;
}