#include<iostream>
#include<string>
#include<vector>
using namespace std;


string reverseWords(string s) {
	string temp = "";
	vector<string> dummystring = {};
	for (int i = 0; i <= s.size(); i++) {
		if ((s[i] == ' ' && temp.size() > 0) || (i == s.size() && temp.size() > 0)) {
			dummystring.push_back(temp);
			temp = "";
		}
		else if (s[i] != ' ' || i == (s.size() - 1)) {
			if (s[i] != ' ') {
				temp += s[i];
			}
		}
	}
	string toreturn = "";
	for (int i = dummystring.size() - 1; i >= 0; i = i- 1) {
		if (i == (dummystring.size() - 1)) {
			toreturn += dummystring[i];
		}
		else {
			toreturn = toreturn + " " + dummystring[i];
		}
	}
	return toreturn;
}



int main() {
	string str = "  hello world  ";
	string prints = reverseWords(str);
	cout << prints;
}