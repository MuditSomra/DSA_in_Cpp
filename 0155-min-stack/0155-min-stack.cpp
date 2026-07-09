class MinStack {
public:
    stack<int> st;
    map<int, int> mp;
    // long long min = INT_MIN - 1;
    MinStack() {
        // stack<int> st;
    }
    
    void push(int value) {
        st.push(value);
        mp[value]++;
        
    }
    
    void pop() {
        if(--mp[st.top()]==0){
            mp.erase(st.top());
        }
        st.pop();
        // mp[st.top()]--;

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        // for(auto x: mp){
        //     cout<<x.first<<" and "<<x.second<<endl;
        // }
        return mp.begin()->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */