// https://leetcode.com/problems/3sum-closest/



#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;
 
int threeSumClosest(vector<int>& nums, int target) {
    sort (nums.begin() , nums.end());
    int closestSum = nums[0] + nums[1] + nums[2];
    for (int i = 0 ; i<nums.size() ; i++){
        int j= i+1;
        int k = nums.size() -1;
        while (j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if( abs(target - sum) < abs( target  - closestSum) )
            {
                closestSum = sum;

            }
            if(sum < target){
                j++;
            }
            else{
                k--;
            }
        }
        
    } 
    return closestSum;
}


//  int threeSumClosest(vector<int>& nums, int target) {
//     int toreturnSum = INT16_MAX;
//     if(target <0){
//         toreturnSum = INT16_MIN;
//         target = target * -1;
//         for (int i = 0 ; i < nums.size() - 2 ; i++){
//         if ( nums[i]+nums[i+1]+nums[i+2] - target  < 0 ? (((nums[i]+nums[i+1]+nums[i+2] - target) * -1) > toreturnSum) : ((nums[i]+nums[i+1]+nums[i+2] - target)  > toreturnSum) )
//         {
//             toreturnSum = nums[i]+nums[i+1]+nums[i+2];
//         }
//     }
//     }else{
//         for (int i = 0 ; i < nums.size() - 2 ; i++){
//         if ( nums[i]+nums[i+1]+nums[i+2] - target  < 0 ? (((nums[i]+nums[i+1]+nums[i+2] - target) * -1) < toreturnSum) : ((nums[i]+nums[i+1]+nums[i+2] - target)  < toreturnSum) )
//         {
//             toreturnSum = nums[i]+nums[i+1]+nums[i+2];
//         }}
//     }
    
//     return toreturnSum;

        
// }
int main(){
    vector<int> nums = {1,1,1,0};
    cout<< threeSumClosest(nums , -100);
}