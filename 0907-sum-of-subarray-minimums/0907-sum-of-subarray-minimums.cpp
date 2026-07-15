class Solution {
public:
       vector<int> nse(vector<int> &arr){
       stack<int> st;
       vector<int> temp(arr.size(), 0);
       for(int i = arr.size()-1; i >=0; i--){
        while(!st.empty() && arr[i]<=arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            temp[i]=arr.size();

        }
        else{
            temp[i]=st.top();
        }
        st.push(i);
       } 
       return temp;
    }
    vector<int> pse(vector<int> &arr){
      
       stack<int> st;
       vector<int> temp(arr.size(), 0);
       for(int i = 0; i <arr.size(); i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            temp[i]=-1;
        }
        // else if(st.empty()){
        //     temp[i]=i-
        // }
        else{
            temp[i]=st.top();
        }
        st.push(i);
       } 
       return temp;
    
    }
    int sumSubarrayMins(vector<int>& arr) {
            const long long MOD = 1000000007;
        vector<int> next = nse(arr);
        vector<int> prev = pse(arr);
        // for(int x: next){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(int x: prev){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int sum = 0;
        for(int i = 0; i < arr.size();i++){
            sum = (sum + (arr[i] * 1LL *((i - prev[i]) * (next[i] - i ))))%MOD;

        }
        return sum;
     
        //     int leftInd;
        //     int leftMax;
        //     int rightMax;
        //     int rightInd;
        //     long long sum = 0;
        //     const long long MOD = 1000000007;
        //     const long long MOD = 1000000007;
        // for(int i = 0; i < arr.size(); i++){
        //     leftInd = i-1;
        //     rightInd = i+1;
        //     leftMax = arr[i];
        //     rightMax = arr[i];
        //     while(leftInd>=0 && leftMax<arr[leftInd]){
               
        //             leftInd--;
               
        //     }
        //     while(rightInd<arr.size() && rightMax<=arr[rightInd]){
               
                
        //             rightInd++;
                
        //     }
        //     leftInd++;
        //     rightInd--;
        //     // cout<<rightInd<<" right ind and left ind "<<leftInd<<" for   "<<arr[i]<<endl;

        //     sum = (sum + (arr[i] * ((i - leftInd + 1) * (rightInd - i + 1 ))))%MOD;
        //     // cout<<"sum is "<<sum<<endl;
        // }
        // return sum;
    }
};