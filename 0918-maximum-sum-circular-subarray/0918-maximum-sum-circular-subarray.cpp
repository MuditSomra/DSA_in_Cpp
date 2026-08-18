class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int max_sum =  0;
        int curr_max =  INT_MIN;
        int min_sum = 0;
        int curr_min = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
            max_sum += nums[i];
            min_sum += nums[i];
            curr_max = max(max_sum, curr_max);
            curr_min = min(min_sum, curr_min);
            if(max_sum<0){
                max_sum = 0;
            }
            if(min_sum>0){
                min_sum = 0;
            }
        }
        return curr_max < 0 ? curr_max: max(curr_max, total-curr_min);
        // vector<int> temp;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     nums.push_back(nums[i]);
        // }
        // // for(int x: nums){
        // //     cout<<x<<" ";
        // // }
        // cout<<endl;
        // int low = 0; int high = 0;
        // int maxVal = INT_MIN;
        // int sum = 0;
        // while(high<nums.size()){
        //     sum += nums[high];
        //     // cout<<sum<<" sum is "<<endl;
        //     if(sum<0){
                
        //         low = high+1;
        //         maxVal = max(maxVal, sum);
        //         sum = 0;
        //         high++;
        //         continue;
        //     }
        //     else if(high - low>=n){
        //         sum -= nums[low];
        //         low++;
                
        //     }
           
        //     while(low<high && nums[low]<0 ){
        //         sum -= nums[low];
        //         low++;
        //     }
        //     maxVal = max(maxVal,sum);
          
        //     high++;
        //     // cout<<maxVal<<" maxVal "<<endl;
        //     // cout<<low<<" low and high "<<high<<endl;
        // }
        // return maxVal;

    }
};