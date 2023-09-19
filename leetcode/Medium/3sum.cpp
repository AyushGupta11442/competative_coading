// https://leetcode.com/problems/3sum/description/


#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> toreturn;
    int n = nums.size();
    
    // Sort the input vector
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; ++i) {
        // Skip duplicates
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        int left = i + 1;
        int right = n - 1;
        int target = -nums[i];

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                toreturn.push_back({nums[i], nums[left], nums[right]});
                // Skip duplicates
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return toreturn;
}