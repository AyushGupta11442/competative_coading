// https://leetcode.com/problems/spiral-matrix/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	int startcol = 0;
	int startrow = 0;
	int endrow = matrix.size();
	int endcol = matrix[0].size();
	vector<int> toreturn;
	int type = 1;

	while ((startcol < endcol) && (startrow < endrow)) {
		if (type == 1) {
			for (int i = startcol; i < endcol; i++) {
				toreturn.push_back(matrix[startrow][i]);
				type = 2;
		
				
			}
			startrow++;
		}
		else if (type == 2) {
			for (int i = startrow; i < endrow; i++) {
				toreturn.push_back(matrix[i][endcol -1]);
				type = 3;
				
			}
			endcol--;
		}
		else if (type == 3) {
			for (int i = endcol - 1; i >= startcol; i--) {
				toreturn.push_back(matrix[endrow - 1 ][i]);
				type = 4;
				

			}
			endrow--;
		}
		else if (type == 4) {
			for (int i = endrow - 1; i >= startrow; i--) {
				toreturn.push_back(matrix[i][startcol]);
				type = 1;
				
			}
			startcol++;
		}
	}
	return toreturn;
}

int main() {
	vector<vector<int>> arr = { {1}  ,{2} };
	vector<int> arrr = spiralOrder(arr);
	for (int a : arrr) {
		cout << a << " ";
	}
}