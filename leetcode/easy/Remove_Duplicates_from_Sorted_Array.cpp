// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& nums) {
    int c=0;
        
        for(int i=0;i<nums.size();i++)
    {
        if(nums[c]!=nums[i]){
            c++;
            nums[c]=nums[i];
            
        }
    }
    return c+1;}

// better
int removeDuplicates(vector<int>& nums) {
    int x=1;
        
        for(int y=x ; y < nums.size(); y++)
        {
            if(nums[y] > nums[x-1])
            {
                nums[x++]=nums[y];
            }
        }
        return x;
}

// int removeDuplicates(vector<int>& nums) {
//     int toreturn = 1;
//     int starting = nums[0];
//     vector<int> result = {};
//     result.push_back(starting);
//     for (int i =0 ; i<nums.size() ;i++){
//         if(nums[i] != starting){
//             toreturn++;
//             starting = nums[i];
//             result.push_back(starting);
//         }
//     }
//     nums = result;
//     return toreturn;
// }
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);

}
