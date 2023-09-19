#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int pnt1 = 0;
    int pnt2 = nums.size() - 1;
    vector<vector<int>> toreturn;
    int i = pnt1 + 1;
    while (pnt1 < pnt2) {
        if (i != pnt1 && i != pnt2 && nums[pnt1] + nums[pnt2] + nums[i] == 0) {
            vector <int> temp = {};
            temp.push_back(nums[pnt1]);
            temp.push_back(nums[i]);
            temp.push_back(nums[pnt2]);
            toreturn.push_back(temp);

        }
        ++i;
        if (i == pnt2)
        {
            pnt1++;
            pnt2--;
            i = pnt1 + 1;
        }

    }
    return toreturn;
}

int main() {
    vector<int> arr = { -1,0,1,2,-1,-4 };
    for (vector<int>  a : threeSum(arr)) {
        for (int ay : a) {
            cout << ay;
        }
    }
}
