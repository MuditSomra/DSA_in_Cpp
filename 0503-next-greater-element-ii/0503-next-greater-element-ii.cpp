class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       stack<int> st;
        int n = nums.size();
       vector<int> temp(n,-1);
        for(int i = (2 * n)-1; i>=0; i--){
            while(!st.empty() && nums[i%n]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                temp[i%n]=-1;
            }
            else{
                temp[i%n]=st.top();
            }
            st.push(nums[i%n]);
        }
        // for(int i = nums.size()-1; i>=0; i--){
        //     // while(!st.empty()){
        //     while(!st.empty() && nums[i]>=st.top()){
        //         st.pop();
        //     }
        //     if(st.empty()){
        //         temp[i]=-1;
        //     }
        //     else{
        //         temp[i]=st.top();
        //     }
        //     st.push(nums[i]);
        //     // }
        // }
        
       
        return temp;  
    }
};