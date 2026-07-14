class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       stack<int> st;
       vector<int> temp(nums.size(),-1);
        for(int i = nums.size()-1; i>=0; i--){
            while(!st.empty() && nums[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                temp[i]=-1;
            }
            else{
                temp[i]=st.top();
            }
            st.push(nums[i]);
        }
        for(int i = nums.size()-1; i>=0; i--){
            // while(!st.empty()){
            while(!st.empty() && nums[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                temp[i]=-1;
            }
            else{
                temp[i]=st.top();
            }
            st.push(nums[i]);
            // }
        }
        
       
        return temp;  
    }
};