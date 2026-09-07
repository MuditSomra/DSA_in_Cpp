class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());
        bool isAllEven = true;
        bool isAllOdd = true;
        bool isFirstEven = (nums1[0]%2==0);
       

        for(int x: nums1){
            if(x%2!=0){
                isAllEven = false;
            }
            if(x%2==0){
                isAllOdd = false;
            }
        }
        if(isAllEven || isAllOdd){
            return true;
        }
        // cout<<isFirstEven<<" and "<<isLastEven<<endl;
        if(isFirstEven){
            return false;
        }
        return true;
        
    }
};