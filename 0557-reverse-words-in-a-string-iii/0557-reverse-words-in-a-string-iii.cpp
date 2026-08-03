class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        string line;
        while(ss>>temp){
            reverse(temp.begin(), temp.end());
            line += temp+" ";
        }
        int size = line.size();
        return line.substr(0,size-1);
    }
};