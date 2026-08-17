class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int x: students){
            q.push(x);
        }
        stack<int> st;
        for(int x = sandwiches.size()-1; x>=0; x--){
            st.push(sandwiches[x]);
        }
        int count = 0;
        int ns = students.size();
        while(!q.empty() && count<ns){
            if(q.front()==st.top()){
               
                q.pop();
                st.pop();
                count=0;
            }
            else{
              
                
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};