class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxVal = 0;
        // vector<int> temp(nums.size(),-1);
        for(int i = 0; i < nums.size();i++){
            if(i>maxVal){
                // cout<<i<<" for this i , it hax maxVal "<<maxVal<<endl;
                return false;
            }
            maxVal = max(maxVal, (i+nums[i]));
           
        }
        return true;
    }
};