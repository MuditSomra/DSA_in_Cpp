class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            min = value;
        }
        else if(value>=min){
            st.push(value);
        }
        else if(min>value){
            st.push( 2 * (long long)value - min);
            min = value;
        }
    }
    
    void pop() {
        if(st.size()==0){

        }
        else if(st.top()<min){
            min = 2 * min - st.top();
            st.pop();
        }
        else{
             st.pop();
        }
    }
    
    int top() {
        // if(st.size()==0){
        //     return -7181;
        // }
        if(st.top()<min){
            return min;
        }
        else{
            return st.top();
        }
        
    }
    
    int getMin() {

        return min;
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