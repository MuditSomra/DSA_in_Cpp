class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank = numBottles;
        int empty = numBottles;
        // int filled = numBottles;
        while(empty>=numExchange){
            // drank += filled;
            // empty =filled;
            // filled = 0;
            drank += empty/numExchange;
            empty =(empty/numExchange) + (empty%numExchange) ;

        }
        return drank;
    }
};