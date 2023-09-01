// https://leetcode.com/problems/running-sum-of-1d-array/

#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& a) {
        for( int i=1 ; i<a.size() ; i++ )
            a[i] += a[i-1] ;
        return a ;
    }
int main (){
    vector<int> nums = {3,1,2,10,1};
    vector<int> v = runningSum(nums);
    v = nums;
    for (int a : nums){
        cout<<a <<" ";
    }
}