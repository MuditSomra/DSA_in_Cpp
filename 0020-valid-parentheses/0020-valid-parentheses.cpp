class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,int> mp = {{'(',1},{')',2},{'{',5},{'}',6},{'[',10},{']',11}};

        for(char c: s){
            if(st.size()!=0 && st.top()==(mp[c]-1)){
                cout<<"inside if for char "<<c<<endl;
                st.pop();
            }
            else{
                cout<<"inside else for char "<<c<<endl;
                st.push(mp[c]);
            }
        }
        if(st.size()!=0){
            return false;
        }
        else{
            return true;
        }
    }
};