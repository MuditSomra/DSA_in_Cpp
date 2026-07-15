class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> temp(temperatures.size(),0);
        stack<int> st;
        // int count = 0;
        // bool popped;
        for(int i = temperatures.size()-1; i>=0; i--){
            // count = 0;
            // popped = false;
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                // popped = true;
                st.pop();
                // count++;
            }
            if(st.empty()){
                temp[i]=0;
            }
            else{
                // if(popped)
                temp[i]=st.top()-i;
            }
            st.push(i);
        }
        return temp;
    }
};