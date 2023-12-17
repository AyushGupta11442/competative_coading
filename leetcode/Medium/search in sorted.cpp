// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mn = 0, mx = nums.size() - 1;
    
        do{
            int mid = (mn + mx) / 2;
            //std::cout << "mid: " << mid << ", mn: " << mn << ", mx: " << mx << ", target: " << target << endl;
            if (nums[mid] == target) return mid;

            if (nums[mn] <= nums[mid]){
                if (nums[mn] <= target && target < nums[mid]){
                    mx = mid;
                }
                else{
                    mn = mid + 1;
                }
            }
            else {
                if (nums[mid] < target && target <= nums[mx]){
                    mn = mid + 1;
                }
                else{
                    mx = mid;
                }
            }

            // else if (nums[mid] < target && nums[mid] < nums[mn] && nums[mid] < nums[mx] && nums[mx] > target){
            //     mn = mid + 1;
            // }
            // else if (nums[mid] < target && nums[mid] < nums[mn] && nums[mid] < nums[mx] && nums[mn] < target){
            //     mx = mid;
            // }
            // else if (nums[mid] < target && nums[mid] < nums[mn] && nums[mid] > nums[mx]){

            // }
            // else if (nums[mid] < target && nums[mid] > nums[mn] && nums[mid] < nums[mx]){
            //     mn = mid + 1;
            // }
            // else if (nums[mid] < target && nums[mid] > nums[mn] && nums[mid] > nums[mx]){
            //     mn = mid + 1;
            // }
            // else if (nums[mid] > target && nums[mid] < nums[mn] && nums[mid] < nums[mx]){
            //     mx = mid;
            // }
            // else if (nums[mid] > target && nums[mid] < nums[mn] && nums[mid] > nums[mx]){

            // }
            // else if (nums[mid] > target && nums[mid] > nums[mn] && nums[mid] < nums[mx]){
            //     mx = mid;
            // }
            // else if (nums[mid] > target && nums[mid] > nums[mn] && nums[mid] > nums[mx] && nums[mn] < target){
            //     mx = mid;
            // }
            // else if (nums[mid] > target && nums[mid] > nums[mn] && nums[mid] > nums[mx] && nums[mx] > target){
            //     mn = mid + 1;
            // }
            // else{
            //     break;
            // }
        } while (mn <= mx);
        
        return -1;
    }
};
