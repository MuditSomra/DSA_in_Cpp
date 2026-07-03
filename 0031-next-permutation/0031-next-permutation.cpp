class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int ind2 = -1;
        for(int i = nums.size()-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                ind = --i;
                // i--;
                break;
            }
        }
        // cout<<ind<<" this is ind"<<endl;
        if(ind==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = nums.size()-1; i >ind; i--){
            if(nums[i]>nums[ind]){
                ind2 = i;
                break;
            }
        }
        // cout<<ind2<<" this is ind 2"<<endl;
        swap(nums[ind],nums[ind2]);
        int l = ind + 1;
        int h = nums.size() - 1;
        while(l<=h){
            swap(nums[l],nums[h]);
            l++;
            h--;
        }
    }
};