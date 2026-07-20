class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int count;
        for(int i = 0; i < nums.size();i++){
            count = 0;
            for(auto x: mp){
                if(x.first<nums[i]){

                count = count + x.second;
                }
                else if(x.first >= nums[i]){
                    break;
                }
            }
            nums[i]=count;
        }
        return nums;
    }
};