#include <iostream>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int left = 0, right = n;
        while (left < right) {
            int mid = (left + right) / 2;
            long long noOfCoin = 1LL * mid * (mid + 1); // Corrected calculation
            if (noOfCoin == n) {
                cout << mid << endl;
                break;
            }
            else if (noOfCoin > n) {
                right = mid - 1;
            }
            else if (noOfCoin < n) {
                left = mid + 1;
            }
        }
    }
}
