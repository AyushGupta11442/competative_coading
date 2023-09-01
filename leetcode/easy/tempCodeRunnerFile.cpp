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