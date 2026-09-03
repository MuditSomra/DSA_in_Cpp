class Solution {
public:
    string longestPrefix(string s) {
        int i = 1;
        int len = 0;
        vector<int> lsp(s.size(),0);
        int maxLSP = INT_MIN;
        while(i < s.size()){
            if(s[i]==s[len]){
                len++;
                lsp[i]=len;
                i++;
            }
            else if(len!=0){
                len = lsp[len-1];
            }
            else{
                lsp[i]=0;
                i++;
            }
        }
        if(lsp[lsp.size()-1]==0){
            return "";
        }
        else{
            return s.substr(0,len);
        }
        
    }
};