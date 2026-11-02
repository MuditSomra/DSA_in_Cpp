class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
      
        string st;
        int min = INT_MAX;
        int val;
        for(int i= 0; i<nums.size()-1; i+=2){
            st =  to_string(nums[i])+to_string(nums[i+1]);
            val = stoi(st);
            // cout<<val<<" ";
            if(min>val){
                // cout<<"in if and val ="<<val<<endl;
                min = val;
            }
    
        }
        return min;
    }
};