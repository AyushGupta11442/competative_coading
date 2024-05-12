#include <iostream>
#include <cmath>

using namespace std;

int max_triangle_height(long long N) {

    long long h = floor((-1 + sqrt(1 + 8 * N)) / 2);
    return h;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int i = 0; i < T; ++i) {
        long long N;
        cin >> N; 
        int max_height = max_triangle_height(N);
        cout << max_height << endl;
    }

    return 0;
}


// binary search approach


long long max_trangle_height(long long N){
    long long low = 0, high=N;
    long long max_height = -1;
    while(low < high){
        long long mid = low + (high - low) /2;
        long long coin_needed = (mid *(mid + 1) ) /2;
        if(coin_needed <= N){
            max_height = mid;
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return max_height;
}