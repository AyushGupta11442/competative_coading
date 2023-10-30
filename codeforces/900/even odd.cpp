// https://codeforces.com/problemset/problem/318/A

// approach 1
#include  <iostream>

using namespace std;

int main() {
	int num, pos; 
	cin >> num >> pos;
	int output;
	if (pos >= num / 2) {
		for (int i = 2; i <= num && pos-- ; i += 2) {
			output = i;
		}
	}
	else {
		for (int i = 1; i <= num && pos--; i += 2) {
			output = i;
		}
	}
	cout << output;

}
 

// approach 2 
#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}