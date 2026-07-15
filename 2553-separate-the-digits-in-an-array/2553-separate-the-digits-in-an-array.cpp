class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        vector<int>temp;
        for(int x: nums){
            temp.clear();
            while(x>0){
                temp.push_back(x%10);
                x = x / 10;
            }
            reverse(temp.begin(),temp.end());
            for(int y: temp){
                ans.push_back(y);
            }
        }
        return ans;
    }
};