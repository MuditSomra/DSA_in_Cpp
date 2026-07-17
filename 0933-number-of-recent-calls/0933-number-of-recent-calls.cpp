class RecentCounter {
public:
    deque<int> dq;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        dq.push_back(t);
        // int final = t;
        while(!dq.empty() && (dq.front()<(t-3000))){
            // cout<<"popping for "<<dq.front()<<endl;
            dq.pop_front();
        }
        return dq.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */