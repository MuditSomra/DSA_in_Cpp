class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); i++){
            string temp = s;
            string temp2 = s.substr(0,i);
            temp.erase(0,i);
            temp+=temp2;
            if(temp==goal){
                return true;
            }

            // cout<<temp<<" ";
        }
        // cout<<endl;
        // cout<<s;
        return false;
    }

};