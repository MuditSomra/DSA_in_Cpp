class Solution {
public:
    int lower(vector<int> & nums){
        int l = 0;
        int h = nums.size()-1;
        int m ;
        while(l<=h){
            m = l + ( h - l)/2;
            if(nums[m]>0){
                h = m - 1;
            }
            else{
                l = m+1;
            }
        }
        return l;
    }
    int higher(vector<int> & nums){
        int l = 0;
        int h = nums.size()-1;
        int m ;
        while(l<=h){
            m = l + ( h - l)/2;
            if(nums[m]<0){
                l = m + 1;
            }
            else{
                h = m - 1;
            }
        }
        return l;
    }
    int maximumCount(vector<int>& nums) {
        int l = lower(nums);
        int h = higher(nums);
        // cout<<l<<"l and h "<<h<<endl;
        int first = h;
        int second = nums.size()-l;
        // cout<<first<<"first and second "<<second<<endl;
        return max(first,second);
    }
};