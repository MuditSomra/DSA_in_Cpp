class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // vector<int> prefix;
        // prefix.push_back(0);
        int sum = 0;
        // for(int x: nums){
        // sum += x;
        // prefix.push_back(sum);
        // }
        // if(target>sum){
        //     return 0;
        // }
        int l = 0;
        int r = 0;
        int minVal = INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                minVal = min(minVal, (r-l+1));
                sum -= nums[l];
                l++;
                continue; 
            }
            r++;
            
        }
        if(minVal==INT_MAX){
            return 0;
        }
        return minVal;
        
    }
};