class Solution {
public:
    vector<int> nse(vector<int>&arr){
        vector<int> temp(arr.size(),0);
        stack<int> st;
        for(int i = arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                temp[i] = arr.size();
            }
            else{
                temp[i]=st.top();
                
            }
                st.push(i);
        }
        return temp;
    }
    vector<int> pse(vector<int>&arr){
        vector<int> temp(arr.size(),0);
        stack<int> st;
        for(int i = 0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                temp[i] = -1;
            }
            else{
                temp[i]=st.top();
                
            }
                st.push(i);
        }
        return temp;
    }
    vector<int> nge(vector<int>&arr){
        vector<int> temp(arr.size(),0);
        stack<int> st;
        for(int i = arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                temp[i] = arr.size();
            }
            else{
                temp[i]=st.top();
                
            }
                st.push(i);
        }
        return temp;
    }
    vector<int> pge(vector<int>&arr){
        vector<int> temp(arr.size(),0);
        stack<int> st;
        for(int i = 0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                st.pop();
            }
            if(st.empty()){
                temp[i] = -1;
            }
            else{
                temp[i]=st.top();
                
            }
                st.push(i);
        }
        return temp;
    }
    long long subArrayRanges(vector<int>& nums) {
          
        vector<int> next = nse(nums);
        vector<int> prev = pse(nums);
        long long sumSmall = 0;
        for(int i = 0; i < nums.size();i++){
            sumSmall = (sumSmall + (nums[i] * 1LL *((i - prev[i]) * (next[i] - i ))));

        }
          
        vector<int> nextLarge = nge(nums);
        vector<int> prevLarge = pge(nums);
        long long sumLarge = 0;
        for(int i = 0; i < nums.size();i++){
            sumLarge = (sumLarge + (nums[i] * 1LL *((i - prevLarge[i]) * (nextLarge[i] - i ))));

        }
        cout<<sumLarge<<" and "<<sumSmall<<endl;
        return sumLarge - sumSmall-0LL;
       
    }
};