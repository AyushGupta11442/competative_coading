// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

#include <iostream>
#include<vector>
using namespace std;


using namespace std;
   int binarysearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarysearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarysearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}


int smallest(int arr[], int pos) {
    while (arr[pos] == arr[pos - 1]) {
        pos--;
    }
    return pos;
}
int largest(int arr[], int pos) {
    while (arr[pos] == arr[pos + 1]) {
        pos++;
    }
    return pos;
}


vector<int> find(int arr[], int n, int x)
{
    int pos = binarysearch(arr, 0, n, x);
    vector<int> toreturn;
    toreturn.push_back(smallest(arr, pos));
    toreturn.push_back(largest(arr, pos));

    return toreturn;
}
