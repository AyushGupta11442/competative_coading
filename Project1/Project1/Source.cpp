#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int lengthOfLongestSubstring(string s) {
	set<char> sets;
	int result = 0;
	for (int i = 0; i < s.size(); i++) {
		if (sets.find(s[i]) == sets.end()) {
			sets.insert(s[i]);
			result = (sets.size() > result) ? sets.size() : result;
		}
		else {
			int temp = 0;
			while (sets.find(s[i]) != sets.end() && temp < i) {
				auto it = sets.find(s[temp]);
				sets.erase(it);
				temp++;
			}
			result = (sets.size() > result) ? sets.size() : result;
		}
	}
	return result;


}

int  main() {
	string s = "pwwkew";
	cout << lengthOfLongestSubstring(s);

}
