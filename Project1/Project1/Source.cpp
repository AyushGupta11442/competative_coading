#include <iostream>
#include<set>
#include <string>
using namespace std;

bool check(string s) {
    set<char> set;
    for (char c : s) {
        set.insert(c);
    }
    return s.size() == set.size();
}

int main() {
    int year;
    cin >> year;
    string strYear = std::to_string(year);
    do {
        year++;
        strYear = std::to_string(year);
    } while (!check(strYear));
    cout << strYear << endl;
}