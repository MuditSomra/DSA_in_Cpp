class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        if(n==1){
            return false;
        }
        int i = 1;
        int len = 0;
        vector<int> lsp (n,0);
        while(i<s.size()){
            if(s[i]==s[len]){
                len++;
                lsp[i]=len;
                i++;
            }
            else if(len!=0){
                len = lsp[len-1];
            }
            else{
                lsp[i] = 0;
                i++;
            }
        }
        return (lsp[n-1]>0 && ((n % (n-lsp[n-1]))==0));
        // cout<<ceil(s.size()/2.0)<<endl;
        // if(lsp[s.size()-1]>=(ceil(s.size()/2.0))){
        //     return true;
        // }
        // return false;
        // if(s.size()==1){
        //     return false;
        // }
        // unordered_map<char,int> mp;
        // for(char c: s){
        //     mp[c]++;
        // }
        // int val = mp[s[0]];
        // for(auto it: mp){
        //     if(it.second!=val){
        //         return false;
        //     }
        // }
        // return true;
        // if(s.size()==1){
        //     return false;
        // }
        // int i = 0;
        // int m = s.size()/2;
        // while(m<s.size()){
        //     if(s[i]==s[m]){
        //         i++;
        //         m++;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
    }
};