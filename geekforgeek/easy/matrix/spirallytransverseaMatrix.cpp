// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
{
    int row = 0;
    int col = 0;
    int pos = 0;
    vector <int> output(r * c);
    while (row < r && col < c) {
        for (int i = col; i < c; i++)
            output[pos++] = matrix[row][i];
        row++;
        for (int i = row; i < r; i++)
            output[pos++] = matrix[i][c-1];
        c--;
        
        if (row < r)
        {
            for (int i = c - 1; i >= col; --i)
                output[pos++] = matrix[r - 1][i];
            r--;
        }
       
        if (col<c)
        {
            for (int i = r - 1; i >= row; --i)
                output[pos++] = matrix[i][col];
            col++;
        }

    }
    return output;
}

int main() {
	vector<vector< int>> arr = { {1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16} };
    vector<int> arr1 = spirallyTraverse(arr , 4,4) ;
    for (int a : arr1) {
        cout << a << " ";
   }
}


