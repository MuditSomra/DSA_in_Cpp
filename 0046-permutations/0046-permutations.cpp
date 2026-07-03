class Solution {
public:

    void recur(int ind, vector<int> & nums,  vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(nums);
        }
        for(int i = ind; i < nums.size(); i++){
            swap(nums[ind],nums[i]);
            recur(ind+1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
        // vector<int> ds;
        // bool * freq = new bool[nums.size()];
        // vector<bool> freq(nums.size(), false);
        recur(0, nums, ans);
        return ans;
    }
};