#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n) {
    vector<long long> toreturn = {};
    int checkpointer = 1;
    int termtocheck = 0;
    for (int i = 0; i < n && checkpointer < arr.size(); i++) {
        if (arr[checkpointer] > arr[termtocheck]) {
            for (int j = termtocheck; j < checkpointer; j++) {
                toreturn.push_back(arr[checkpointer]);
            }
            termtocheck = checkpointer; 
            checkpointer++;
        }
        else {
            checkpointer++;
        }
    }
    for (int i = termtocheck; i < arr.size(); i++) {
        toreturn.push_back(-1);
    }
    return toreturn;
}
int main()
{
    vector<long long > arr = { 1, 3, 2, 4 };
    vector<long long> arr1 = nextLargerElement(arr, 4);
    for (auto c : arr1) {
        cout << c << " ";
    }
}