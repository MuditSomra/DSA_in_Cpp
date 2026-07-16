class Solution {
public:
    // vector<int> ngne(vector<int> &arr){
    //    stack<int> st;
    //    vector<int> temp(arr.size(), 0);
    //    for(int i = arr.size()-1; i >=0; i--){
    //     while(!st.empty() && st.top()>0){
    //         st.pop();
    //     }
    //     if(st.empty()){
    //         temp[i]=0;

    //     }
    //     else{
    //         temp[i]=st.top();
    //     }
    //     st.push(arr[i]);
    //    } 
    //    return temp;
    // }
    // vector<int> pgpe(vector<int> &arr){
      
    //    stack<int> st;
    //    vector<int> temp(arr.size(), 0);
    //    for(int i = 0; i <arr.size(); i++){
    //     while(!st.empty() && st.top()<(-1 * arr[i])){
    //         st.pop();
    //     }
    //     if(st.empty()){
    //         temp[i]=0;

    //     }
    //     else{
    //         temp[i]=st.top();
    //     }
    //     st.push(arr[i]);
    //    } 
    //    return temp;
    
    // }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        bool destroyed = false;
        for(int i = 0; i < asteroids.size(); i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
            if(st.empty() || st.top()<0){
                st.push(asteroids[i]);
                continue;
            }
            while(!st.empty() && st.top()<abs(asteroids[i]) && st.top()>0){
                st.pop();
            }
            if(st.empty()){
                st.push(asteroids[i]);
            }
            else if(st.top()<0){
                st.push(asteroids[i]);
                // destroyed = true;
                // st.pop();
                // continue;
            }
            else if(st.top()>abs(asteroids[i])){
                // destroyed = true;
                // st.pop();
                continue;
            }
            else{
                // st.push(asteroids[i])
                st.pop();
            }
           
           

            }
        }
        // for(int i = 0; i < asteroids.size();i++){
        //     if(asteroids[i]>0){
        //         st.push(asteroids[i]);
        //     }
        //     else{
        //         if(st.top()>0){
        //         while(!st.empty() && st.top()<abs(asteroids[i]) ){
        //             st.pop();
        //         }
        //         if(st.empty()){
        //             st.push(asteroids[i]);
        //         }
        //         else{
        //             if(st.top()==abs(asteroids[i])){
        //                 st.pop();
        //             }
        //         }

        //         }
        //         else{
        //             st.push(asteroids[i]);
        //         }
                
        //     }
        // }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        // vector<int> positive = ngne(asteroids);
        // vector<int> negative = pgpe(asteroids);
        // for(int x: positive){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(int x: negative){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(int i = 0; i < positive.size(); i++){
        //     if(asteroids[i]>0 && positive[i]<=(-1 * asteroids[i])){
        //         asteroids[i]=0;
        //     }
        // }
        // for(int i = 0; i < negative.size(); i++){
        //     if(asteroids[i]<0 && negative[i]>=(-1 * asteroids[i])){
        //         asteroids[i]=0;
        //     }
        // }
        // vector<int> ans;
        // for(int x: asteroids){
        //     if(x!=0){
        //         ans.push_back(x);
        //     }
        // }
        // return ans;
    }
};