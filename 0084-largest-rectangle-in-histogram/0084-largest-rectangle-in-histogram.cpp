class Solution {
public:
    // vector<int> nse(vector<int>& arr){
    //     vector<int> temp(arr.size(),0);
    //     stack<int> st;
    //     for(int i = arr.size()-1; i>=0; i--){
    //     while(!st.empty() && arr[st.top()]>=arr[i]){
    //         st.pop();
    //     }
    //     if(st.empty()){
    //         // st.push(i);
    //         temp[i]=arr.size();
    //     }
    //     else{
    //         temp[i]=st.top();
    //     }
    //     st.push(i);

    //     }
    //     return temp;

    // }
    // vector<int> pse(vector<int>& arr){
    //     vector<int> temp(arr.size(),0);
    //     stack<int> st;
    //     for(int i = 0; i<arr.size(); i++){
    //     while(!st.empty() && arr[st.top()]>=arr[i]){
    //         st.pop();
    //     }
    //     if(st.empty()){
    //         // st.push(i);
    //         temp[i]=-1;
    //     }
    //     else{
    //         temp[i]=st.top();
    //     }
    //     st.push(i);

    //     }
    //     return temp;

    // }
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int element;
        int nse;
        int pse;
        int maxArea = 0;
        for(int i = 0; i < heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                element = heights[st.top()];
                st.pop();
                nse = i;
                pse = st.empty()?-1:st.top();
                maxArea = max(maxArea, element * (nse - pse - 1)); 
            }
            st.push(i);
        }
        while(!st.empty()){
            element = heights[st.top()];
            st.pop();
            nse = heights.size();
            pse = st.empty()?-1: st.top();
            maxArea = max(maxArea, element * (nse - pse - 1)); 

        }
        return maxArea;
        // vector<int> psv = pse(heights);
        // vector<int> nsv = nse(heights);
        // int maxArea = 0;
        // int area;
        // for(int i = 0; i <heights.size(); i++){
        //     area = 0;
        //     area = ((nsv[i]-i) + (i - psv[i] - 1 )) * heights[i];
        //     maxArea = max(maxArea, area);
        // }
        // return maxArea;
    }
};