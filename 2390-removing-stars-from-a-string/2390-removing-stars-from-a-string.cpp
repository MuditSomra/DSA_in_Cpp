class Solution {
public:
    string removeStars(string s) {
        // stack<char> st;
        deque<char> dq;
        dq.push_back(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(!dq.empty() && s[i]=='*'){
                dq.pop_back();
            }
            else{
                dq.push_back(s[i]);
            }
        }
        string ans = "";
        while(!dq.empty()){
            ans += dq.front();
            dq.pop_front();
        }
        // reverse(ans.begin(), ans.end());
        return ans;
    }
};