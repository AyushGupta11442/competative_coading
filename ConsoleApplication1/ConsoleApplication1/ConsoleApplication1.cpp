#include <iostream>
#include<vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> toreturn;
	int first = 0;
	int last = nums.size() -1;
	while (first + 1 < last) {
		int mid = first + 1;
		last = nums.size() - 1 - first;
		while (mid < last) {
			if (nums[first] + nums[mid] + nums[last] == 0) {
				toreturn.push_back({ first , mid , last });
				int firstt = nums[first];
				int second = nums[mid];
				int third = nums[last];
				cout << nums[first] << " " << nums[mid] << " " << nums[last];
			}
			mid++;
			last--;
		}
		first++;
		
	}
	return toreturn;
	
}

int main() {
	vector<int> arr = { -1,0,1,2,-1,-4 };
	threeSum(arr);
}