class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int var;
        int count = 0; 
        for(int i = 0; i < tickets.size(); i++){
            if(i==k){
                q.push(-1);
                var = tickets[i];
                // cout<<var<<" this is var"<<endl;
            }
            else{
            q.push(tickets[i]);

            }
        }
        while(var!=0){
            if(q.front()>0 && q.front()!=-1){
                // cout<<" inside if and front "<<q.front()<<endl;
                q.front() = q.front()-1;
                q.push(q.front());
                q.pop();
                // cout<<" inside if and new front "<<q.front()<<endl;
                count++;
            }
            else if(q.front()==-1){
                // cout<<"var getting low"<<var<<endl;
                var--;
                // cout<<"inside else and front is"<<q.front()<<endl;
                q.push(q.front());
                q.pop();
                count++;
                

            }
            else { 
              q.pop();
            }
        }
        
        return count;
    }
};