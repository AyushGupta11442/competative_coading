#include<iostream>
#include<string>
#include<vector>
using namespace std;


string reverseWords(string s) {
	string temp = "";
	vector<string> dummystring = {};
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ' && temp.size() > 0) {
			dummystring.push_back(temp);
			temp = "";
		}
		else {
			temp += s[i];
		}
	}
	string toreturn = "";
	for (int i = dummystring.size() - 1; i >= 0; i--) {
		if (i = (dummystring.size() - 1)) {
			toreturn += dummystring[i];
		}
		else {
			toreturn = toreturn + " " + dummystring[i];
		}
	}
	return toreturn;
}



int main() {
	string str = "a good   example";
	string prints = reverseWords(str);
	for (char a : prints) {
		cout << prints;
	}
}