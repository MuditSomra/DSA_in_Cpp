class MyStack {
public:
    queue<int> qe;
    MyStack() {
        
    }
    
    void push(int x) {
      int size = qe.size();
      int var;
      qe.push(x);
      for(int i = 0; i < size; i++){
        var = qe.front();
        qe.pop();
        qe.push(var);
      }  
    }
    
    int pop() {
        int val = qe.front();
        qe.pop();
       return val; 
    }
    
    int top() {
       return qe.front(); 
        
    }
    
    bool empty() {
        return qe.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */