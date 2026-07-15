class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int x: nums){
            string s = to_string(x);
            for(char c: s){
                ans.push_back(c-'0');
            }
        }
        // vector<int>temp;
        // for(int x: nums){
        //     temp.clear();
        //     while(x>0){
        //         temp.push_back(x%10);
        //         x = x / 10;
        //     }
        //     reverse(temp.begin(),temp.end());
        //     for(int y: temp){
        //         ans.push_back(y);
        //     }
        // }
        return ans;
    }
};