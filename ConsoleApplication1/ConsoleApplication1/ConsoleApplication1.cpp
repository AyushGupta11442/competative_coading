#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int longestConsecutive(vector<int>& nums) {
	if (nums.size() == 1) {
		return 1;
	}
	else if (nums.size() == 0) {
		return 0;
	}
	else {
		sort(nums.begin(), nums.end());
		int maxsize = 0;
		int toreturn = 0;
		int toadd =0 ;
		for (int i = 1; i < nums.size(); i++) {
			if ((nums[i] == (nums[i - 1] + 1)) || ((nums[i] == (nums[i - 1])))) {
				maxsize++;
				if ((nums[i] == (nums[i - 1]))){
					toadd++;
				}
			}
			else {
				toreturn = max(maxsize, toreturn);
				maxsize = 0;
			}
		}
		toreturn = max(maxsize, toreturn);
		return (toadd == 0) ? toreturn + 1 : toreturn;
	}
}

int main() {
	vector<int> arr = {0,0};
	cout << longestConsecutive(arr);
}