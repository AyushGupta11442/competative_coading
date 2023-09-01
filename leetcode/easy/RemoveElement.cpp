// https://leetcode.com/problems/remove-element/

#include <iostream>
#include <vector>

using namespace std;
// fastest
int removeElement(vector<int>& nums, int val) {
    int toreturn = 0;
    for (int i =0 ; i<nums.size(); i++){
        if (nums[i] != val){
            nums[toreturn++] = nums[i];
            
        }
    }
    return toreturn ;
        
}
int main(){
    vector<int> num = {0,1,2,2,3,0,4,2};
    cout<<removeElement(num , 2);
}