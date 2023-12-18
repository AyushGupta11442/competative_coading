// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size(), sum = 0, max_sum = nums[0];
//         for (int i = 0; i < n; i++) {
//             sum += nums[i];
//             max_sum = max(max_sum, sum);
//             if (sum < 0) sum = 0;
//         }
//         return max_sum;
//     }
// };
#include <iostream>
#include <istream>
#include <vector>
#include <string>
using namespace std;

// int speedUp = []
// {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();

// // only if you know c is a digit
// int digit(char c)
// {
//     return c & 15;
// }
// bool isDigit(char c)
// {
//     return '0' <= c && c <= '9';
// }
// int in = []
// {
//     std::ofstream out("user.out");
//     std::cout.rdbuf(out.rdbuf());
//     int ans, sum;
//     bool _neg;
//     for (std::string s; std::getline(std::cin, s); std::cout << '\n')
//     {
//         ans = -1e9, sum = 0;
//         for (int _i = 1, _n = s.length(), v; _i < _n; ++_i)
//         {
//             _neg = false;
//             if (s[_i] == '-')
//                 ++_i, _neg = true;
//             v = digit(s[_i]);
//             while (isDigit(s[++_i]))
//                 v = v * 10 + digit(s[_i]);
//             _neg ? v = -v : v;
//             // do stuff with v
//             ans = std::max(ans, sum < 0 ? sum = v : sum += v);
//         }
//         std::cout << ans;
//     }
//     exit(0);
//     return 0;
// }();
// class Solution
// {
// public:
//     int maxSubArray(std::vector<int>)
//     {
//         return 0;
//     }
// };

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN  , max_end_here = 0; 
        for (int i  = 0 ; i < nums.size() ; i++){
            max_end_here = max_end_here + nums[i];

            if (max_so_far < max_end_here){
                max_so_far = max_end_here;
            }

            if (max_end_here < 0)
                max_end_here = 0; 
        }
        return max_so_far;
    }
};




static auto speedUp =  []{ std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();

class Solution {
public:
    static int maxSubArray(std::vector<int>& nums) {
        int maxSum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] = std::max(nums[i], nums[i] + nums[i-1]);
            maxSum = std::max(maxSum, nums[i]);
        }
        return maxSum;
    }
};
