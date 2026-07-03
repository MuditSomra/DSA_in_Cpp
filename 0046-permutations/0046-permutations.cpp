class Solution {
public:
    void recur(int ind , vector<int>& nums, vector<int> &ds, vector<vector<int>> &ans, vector<bool> freq ){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
        if(!freq[i]){
            freq[i] = true;
            ds.push_back(nums[i]);
            recur(ind+1, nums, ds, ans, freq);
            ds.pop_back();
            freq[i]=false;
        }

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        // bool * freq = new bool[nums.size()];
        vector<bool> freq(nums.size(), false);
        recur(0, nums, ds, ans, freq);
        return ans;
    }
};