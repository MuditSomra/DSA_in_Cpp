class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int freq = 0;
        int dig = 0;
        for(int i = 0; i < nums.size(); i++){
            if((i&1)==0){
                freq = nums[i];
            }
            if((i&1)==1){
                dig = nums[i];
                for(int j = 0; j < freq; j++){
                    ans.push_back(dig);
                }
            }
        }
        return ans;
    }
};