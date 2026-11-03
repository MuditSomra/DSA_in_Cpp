class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = INT_MIN;
        for(int x: nums){
            if(x>max){
                max = x;
            }
        }
        int count = 0;
        for(int x: nums){
            count += (max-x);
        }
        return count;
    }
};