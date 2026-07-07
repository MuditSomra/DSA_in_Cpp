class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        prefix[0]=nums[0];
        suffix[nums.size()-1]=nums[nums.size()-1];
        for(int i = 1; i <nums.size();i++ ){
            prefix[i] = nums[i] * prefix[i-1];
        }
        for(int i = nums.size()-2; i >= 0; i--){
            suffix[i] = nums[i] * suffix[i+1];
        }
        for(int x: prefix){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x: suffix){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i = 0; i < nums.size(); i++){
            if(i!=0 && i!=(nums.size()-1) ){
            nums[i] = prefix[i-1] * suffix[i+1];
            }
            else if(i==0){
            nums[i] =  suffix[i+1];
            }
            else if(i==nums.size()-1){
            nums[i] =  prefix[i-1];
            }
        }
        return nums;
    }
};