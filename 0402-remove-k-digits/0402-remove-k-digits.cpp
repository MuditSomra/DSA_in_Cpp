class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k){
            return "0";
        }
        stack<int> st;
        int n;
        int count = 0;
        for(char c: num){
            n = c-'0';
            // cout<<n<<" this is n "<<endl;
            while(!st.empty() && st.top()>n && count<k){
                // cout<<st.top()<<" this is gettign popped"<<endl;
                st.pop();
                count++;
            }
            st.push(n);
        }
        if(count<k){
            while(count!=k && !st.empty()){
                st.pop();
                count++;
            }
        }
        string s;
        while(!st.empty()){
            // cout<<st.top()<<" this is stack value "<<endl;
            s+=to_string(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        int sind = 0;
        for(char c: s){
            if(c=='0'){
                sind++;
            }
            else{
                break;
            }
        }
        // cout<<s<<endl;
        // int res = stoi(s);
        // s = to_string(res);
        if(s.substr(sind)==""){
            return "0";
        }
        return s.substr(sind);
    }
};