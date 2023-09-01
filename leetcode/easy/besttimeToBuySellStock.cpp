// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <vector>

using namespace std;

// int maxProfit(vector<int>& prices) {
//     int maxprofit = 0;
    
//     for(int i = 0 ; i <prices.size();i++)
//     {
//         for(int j = i ; j <prices.size();j++)
//         {
//             if (prices[j]-prices[i] > maxprofit){
//                 maxprofit = prices[j]-prices[i];
//             }
//         }
//     }
//     return maxprofit;
// }

// int maxProfit(vector<int>& prices) {
//     int maxprofit = 0;
//     int i = 0 ;
//     int j = i+1;
//     while (i != prices.size()){
//         if (prices[j]-prices[i] > maxprofit){
//             maxprofit = prices[j]-prices[i];
//         }
//         ++j;
//         if (j == prices.size()){
//             i++;
//             j = i+1;
//         }

//     }
//     return maxprofit;
// }

int maxProfit(vector<int>& prices) {
    int lv = INT8_MAX;
    int op = 0;
    for (int i = 0 ;  i < prices.size(); i++){
        if (prices[i]<lv){
            lv=prices[i];
        }
        if(prices[i] - lv > op){
            op = prices[i] - lv;
        }
    }
    return op;

}

int main (){
    vector<int> prices = {7,6,4,3,1};
    cout<<maxProfit(prices);
}
