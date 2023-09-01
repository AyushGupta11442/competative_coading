// https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }

int main (){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    merge(nums1 , 3 , nums2 , 3);
    for (int a : nums1){
        cout<< a << " ";
    }
}