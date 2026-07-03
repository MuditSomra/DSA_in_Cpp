class Solution {
public:
    // void recur(int ind , vector<int>&nums, vector<vector<int>>&ans){
        // if(ind==nums.size()){
        //     ans.push_back(nums);
        //     return;
        // }
        // for(int i = ind+1; i < nums.size(); i++){
        //     if(nums[ind]==nums[i] && i!=ind){
        //         continue;
        //     }
        //     swap(nums[ind], nums[i]);
        //     recur(ind+1, nums, ans);
        //     swap(nums[ind], nums[i]);
        // }
    void recur(vector<int>& nums, vector<int> &ds, vector<vector<int>> &ans, vector<bool> &freq ){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
        if( i!=0 && nums[i]==nums[i-1] && freq[i-1]==false ){
            // nums[i]=true;
            continue;

        }
        if( !freq[i] ){
            freq[i] = true;
            // if(nums[i]!=nums[i-1]){
            ds.push_back(nums[i]);
            recur( nums, ds, ans, freq);
            ds.pop_back();
            freq[i]=false;
            // }
            // else{
            //     return;
            // }
        }

        }
       
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    //   vector<vector<int>>ans;
      sort(nums.begin(), nums.end());
    //   recur(0, nums, ans);
    //   return ans;
        vector<vector<int>> ans;
        vector<int> ds;
        // bool * freq = new bool[nums.size()];
        vector<bool> freq(nums.size(), false);
        recur( nums, ds, ans, freq);
        return ans;
    }
};