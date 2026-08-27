class Solution {
public:

    int maxProfit(vector<int>& prices) {
        // int maxval=INT_MIN;
        // for(int i = 0; i < prices.size()-1; i++){
        //     for(int j = i+1; j < prices.size();j++){
        //         maxval = max(maxval, prices[j]-prices[i]);
        //     }
        // }
        // if(maxval<0){
        //     return 0;
        // }
        // return maxval;
        int nge = prices[prices.size()-1];
        vector<int> temp(prices.size(),-1);
        for(int i = prices.size()-2; i>=0; i--){
            if(prices[i]>nge){
                nge = prices[i];
            }
            else{
                temp[i]=nge;
            }
        }
        int maxVal = INT_MIN;
        for(int x = 0; x < temp.size(); x++){
           maxVal = max(maxVal, temp[x]-prices[x]);
        }
        if(maxVal<0){
            return 0;
        }
        return maxVal;
    }
};